https://datatracker.ietf.org/doc/html/rfc2616

# 1

The Hypertext Transfer Protocol (HTTP) is an application-level
protocol for distributed, collaborative, hypermedia information
systems. It is a generic, stateless, protocol which can be used for
many tasks beyond its use for hypertext, such as name servers and
distributed object management systems, through extension of its
request methods, error codes and headers. A feature of HTTP is
the typing and negotiation of data representation, allowing systems
to be built independently of the data being transferred.

    HTTP has been in use by the World-Wide Web global information

initiative since 1990.

The first version of HTTP,
referred to as HTTP/0.9, was a simple protocol for raw data transfer
across the Internet. HTTP/1.0, as defined by RFC 1945 [6], improved
the protocol by allowing messages to be in the format of MIME-like
messages, containing metainformation about the data transferred and
modifiers on the request/response semantics.

However, HTTP/1.0 does
not sufficiently take into consideration the effects of hierarchical
proxies, caching, the need for persistent connections, or virtual
hosts. In addition, the proliferation of incompletely-implemented
applications calling themselves "HTTP/1.0" has necessitated a
protocol version change in order for two communicating applications
to determine each other's true capabilities.

This specification defines the protocol referred to as "HTTP/1.1".
This protocol includes more stringent requirements than HTTP/1.0 in
order to ensure reliable implementation of its features.

Practical information systems require more functionality than simple
retrieval, including search, front-end update, and annotation. HTTP
allows an open-ended set of methods and headers that indicate the
purpose of a request [47]. It builds on the discipline of reference
provided by the Uniform Resource Identifier (URI) [3], as a location
(URL) [4] or name (URN) [20], for indicating the resource to which a
method is to be applied. Messages are passed in a format similar to
that used by Internet mail [9] as defined by the Multipurpose
Internet Mail Extensions (MIME) [7].

HTTP is also used as a generic protocol for communication between
user agents and proxies/gateways to other Internet systems, including
those supported by the SMTP [16], NNTP [13], FTP [18], Gopher [2],
and WAIS [10] protocols. In this way, HTTP allows basic hypermedia
access to resources available from diverse applications.

An implementation is not compliant if it fails to satisfy one or more
of the MUST or REQUIRED level requirements for the protocols it
implements. An implementation that satisfies all the MUST or REQUIRED
level and all the SHOULD level requirements for its protocols is said
to be "unconditionally compliant"; one that satisfies all the MUST
level requirements but not all the SHOULD level requirements for its
protocols is said to be "conditionally compliant."

**connection**
A transport layer virtual circuit established between two programs
for the purpose of communication.

**message**
The basic unit of HTTP communication, consisting of a structured
sequence of octets matching the syntax defined in section 4 and
transmitted via the connection.

**request**
An HTTP request message.

**response**
An HTTP response message.

**resource**
A network data object or service that can be identified by a URI,
as defined in section 3.2. Resources may be available in multiple
representations (e.g. multiple languages, data formats, size, and
resolutions) or vary in other ways.

**entity**
The information transferred as the payload of a request or
response. An entity consists of metainformation in the form of
entity-header fields and content in the form of an entity-body, as
described in section 7.

**representation**
An entity included with a response that is subject to content
negotiation, as described in section 12. There may exist multiple
representations associated with a particular response status.

**content negotiation**
The mechanism for selecting the appropriate representation when
servicing a request, as described in section 12. The
representation of entities in any response can be negotiated
(including error responses).

**variant**
A resource may have one, or more than one, representation(s)
associated with it at any given instant. Each of these
representations is termed a `varriant'. Use of the term `variant'
does not necessarily imply that the resource is subject to content
negotiation.

**client**
A program that establishes connections for the purpose of sending
requests.

**user agent**
The client which initiates a request. These are often browsers,
editors, spiders (web-traversing robots), or other end user tools.

**server**
An application program that accepts connections in order to
service requests by sending back responses. Any given program may
be capable of being both a client and a server; our use of these
terms refers only to the role being performed by the program for a
particular connection, rather than to the program's capabilities
in general. Likewise, any server may act as an origin server,
proxy, gateway, or tunnel, switching behavior based on the nature
of each request.

**origin server**
The server on which a given resource resides or is to be created.

**proxy**
An intermediary program which acts as both a server and a client
for the purpose of making requests on behalf of other clients.
Requests are serviced internally or by passing them on, with
possible translation, to other servers. A proxy MUST implement
both the client and server requirements of this specification. A
"transparent proxy" is a proxy that does not modify the request or
response beyond what is required for proxy authentication and
identification. A "non-transparent proxy" is a proxy that modifies
the request or response in order to provide some added service to
the user agent, such as group annotation services, media type
transformation, protocol reduction, or anonymity filtering. Except
where either transparent or non-transparent behavior is explicitly
stated, the HTTP proxy requirements apply to both types of
proxies.

**gateway**
A server which acts as an intermediary for some other server.
Unlike a proxy, a gateway receives requests as if it were the
origin server for the requested resource; the requesting client
may not be aware that it is communicating with a gateway.

**tunnel**
An intermediary program which is acting as a blind relay between
two connections. Once active, a tunnel is not considered a party
to the HTTP communication, though the tunnel may have been
initiated by an HTTP request. The tunnel ceases to exist when both
ends of the relayed connections are closed.

**cache**
A program's local store of response messages and the subsystem
that controls its message storage, retrieval, and deletion. A
cache stores cacheable responses in order to reduce the response
time and network bandwidth consumption on future, equivalent
requests. Any client or server may include a cache, though a cache
cannot be used by a server that is acting as a tunnel.

**cacheable**
A response is cacheable if a cache is allowed to store a copy of
the response message for use in answering subsequent requests. The
rules for determining the cacheability of HTTP responses are
defined in section 13. Even if a resource is cacheable, there may
be additional constraints on whether a cache can use the cached
copy for a particular request.

**first-hand**
A response is first-hand if it comes directly and without
unnecessary delay from the origin server, perhaps via one or more
proxies. A response is also first-hand if its validity has just
been checked directly with the origin server.

**explicit expiration time**
The time at which the origin server intends that an entity should
no longer be returned by a cache without further validation.

**heuristic expiration time**
An expiration time assigned by a cache when no explicit expiration
time is available.

**age**
The age of a response is the time since it was sent by, or
successfully validated with, the origin server.

**freshness lifetime**
The length of time between the generation of a response and its
expiration time.

**fresh**
A response is fresh if its age has not yet exceeded its freshness
lifetime.

**stale**
A response is stale if its age has passed its freshness lifetime.

**semantically transparent**
A cache behaves in a "semantically transparent" manner, with
respect to a particular response, when its use affects neither the
requesting client nor the origin server, except to improve
performance. When a cache is semantically transparent, the client
receives exactly the same response (except for hop-by-hop headers)
that it would have received had its request been handled directly
by the origin server.

**validator**
A protocol element (e.g., an entity tag or a Last-Modified time)
that is used to find out whether a cache entry is an equivalent
copy of an entity.

**upstream/downstream**
Upstream and downstream describe the flow of a message: all
messages flow from upstream to downstream.

**inbound/outbound**
Inbound and outbound refer to the request and response paths for
messages: "inbound" means "traveling toward the origin server",
and "outbound" means "traveling toward the user agent"

The HTTP protocol is a request/response protocol. A client sends a
request to the server in the form of a request method, URI, and
protocol version, followed by a MIME-like message containing request
modifiers, client information, and possible body content over a
connection with a server. The server responds with a status line,
including the message's protocol version and a success or error code,
followed by a MIME-like message containing server information, entity
metainformation, and possible entity-body content. The relationship
between HTTP and MIME is described in appendix.

Most HTTP communication is initiated by a user agent and consists of
a request to be applied to a resource on some origin server. In the
simplest case, this may be accomplished via a single connection (v)
between the user agent (UA) and the origin server (O).

          request chain ------------------------>
       UA -------------------v------------------- O
          <----------------------- response chain

A more complicated situation occurs when one or more intermediaries
are present in the request/response chain. There are three common
forms of intermediary: proxy, gateway, and tunnel. A _proxy_ is a
forwarding agent, receiving requests for a URI in its absolute form,
rewriting all or part of the message, and forwarding the reformatted
request toward the server identified by the URI. A _gateway_ is a
receiving agent, acting as a layer above some other server(s) and, if
necessary, translating the requests to the underlying server's
protocol. A _tunnel_ acts as a relay point between two connections
without changing the messages; tunnels are used when the
communication needs to pass through an intermediary (such as a
firewall) even when the intermediary cannot understand the contents
of the messages.

          request chain -------------------------------------->
       UA -----v----- A -----v----- B -----v----- C -----v----- O
          <------------------------------------- response chain

The figure above shows three intermediaries (A, B, and C) between the
user agent and origin server. A request or response message that
travels the whole chain will pass through four separate connections.
This distinction is important because some HTTP communication options
may apply only to the connection with the nearest, non-tunnel neighbor, only to the end-points of the chain, or to all connections along the chain.
Although the diagram is linear, each participant may
be engaged in multiple, simultaneous communications. For example, B
may be receiving requests from many clients other than A, and/or
forwarding requests to servers other than C, at the same time that it
is handling A's request.

Any party to the communication which is not acting as a tunnel may
employ an internal cache for handling requests. The effect of a cache
is that the request/response chain is shortened if one of the
participants along the chain has a cached response applicable to that
request.

The following illustrates the resulting chain if B has a
cached copy of an earlier response from O (via C) for a request which
has not been cached by UA or A.

          request chain ---------->
       UA -----v----- A -----v----- B - - - - - - C - - - - - - O
          <--------- response chain

Not all responses are usefully cacheable, and some requests may
contain modifiers which place special requirements on cache behavior.
HTTP requirements for cache behavior and cacheable responses are
defined in section 13.

In fact, there are a wide variety of architectures and configurations
of caches and proxies currently being experimented with or deployed
across the World Wide Web. These systems include national hierarchies
of proxy caches to save transoceanic bandwidth, systems that
broadcast or multicast cache entries, organizations that distribute
subsets of cached data via CD-ROM, and so on. HTTP systems are used
in corporate intranets over high-bandwidth links, and for access via
PDAs with low-power radio links and intermittent connectivity. The
goal of HTTP/1.1 is to support the wide diversity of configurations
already deployed while introducing protocol constructs that meet the
needs of those who build web applications that require high
reliability and, failing that, at least reliable indications of
failure.

HTTP communication usually takes place over TCP/IP connections. The
default port is TCP 80 [19], but other ports can be used. This does
not preclude HTTP from being implemented on top of any other protocol
on the Internet, or on other networks. HTTP only presumes a reliable
transport; any protocol that provides such guarantees can be used;

In HTTP/1.0, most implementations used a new connection for each
request/response exchange. In HTTP/1.1, a connection may be used for
one or more request/response exchanges, although connections may be
closed for a variety of reasons

?????????????????????????????????????????????????????????????????????????
_Notational Conventions and Generic Grammar -> specified in the standard_
?????????????????????????????????????????????????????????????????????????

**HTTP VERSION**

HTTP uses a "<major>.<minor>" numbering scheme to indicate versions
of the protocol. The protocol versioning policy is intended to allow
the sender to indicate the format of a message and its capacity for
understanding further HTTP communication, rather than the features
obtained via that communication. No change is made to the version
number for the addition of message components which do not affect
communication behavior or which only add to extensible field values.
The <minor> number is incremented when the changes made to the
protocol add features which do not change the general message parsing
algorithm, but which may add to the message semantics and imply
additional capabilities of the sender. The <major> number is
incremented when the format of a message within the protocol is
changed.

An application that sends a request or response message that includes
HTTP-Version of "HTTP/1.1" MUST be at least conditionally compliant
with this specification. Applications that are at least conditionally
compliant with this specification SHOULD use an HTTP-Version of
"HTTP/1.1" in their messages, and MUST do so for any message that is
not compatible with HTTP/1.0.

The HTTP version of an application is the highest HTTP version for
which the application is at least conditionally compliant.

Proxy and gateway applications need to be careful when forwarding
messages in protocol versions different from that of the application.
Since the protocol version indicates the protocol capability of the
sender, a proxy/gateway MUST NOT send a message with a version
indicator which is greater than its actual version. If a higher
version request is received, the proxy/gateway MUST either downgrade
the request version, or respond with an error, or switch to tunnel
behavior.

**URI**

As far as HTTP is concerned, Uniform Resource Identifiers are
simply formatted strings which identify--via name, location, or any
other characteristic--a resource.

The HTTP protocol does not place any a priori limit on the length of
a URI. Servers MUST be able to handle the URI of any resource they
serve, and SHOULD be able to handle URIs of unbounded length if they
provide GET-based forms that could generate such URIs. A server
SHOULD return 414 (Request-URI Too Long) status if a URI is longer
than the server can handle

http_URL = "http:" "//" host [ ":" port ] [ abs_path [ "?" query ]]

If the port is empty or not given, port 80 is assumed. The semantics
are that the identified resource is located at the server listening
for TCP connections on that port of that host, and the Request-URI
for the resource is abs_path (section 5.1.2). The use of IP addresses
in URLs SHOULD be avoided whenever possible (see RFC 1900 [24]). If
the abs_path is not present in the URL, it MUST be given as "/" when
used as a Request-URI for a resource (section 5.1.2). If a proxy
receives a host name which is not a fully qualified domain name, it
MAY add its domain to the host name it received. If a proxy receives
a fully qualified domain name, the proxy MUST NOT change the host
name.

**URI COMPARISON**

When comparing two URIs to decide if they match or not, a client
SHOULD use a case-sensitive octet-by-octet comparison of the entire
URIs, with these exceptions:

    - A port that is empty or not given is equivalent to the default
    port for that URI-reference;

    - Comparisons of host names MUST be case-insensitive;

    - Comparisons of scheme names MUST be case-insensitive;

    - An empty abs_path is equivalent to an abs_path of "/".

Characters other than those in the "reserved" and "unsafe" sets (see
RFC 2396 [42]) are equivalent to their ""%" HEX HEX" encoding.

For example, the following three URIs are equivalent:

      http://abc.com:80/~smith/home.html
      http://ABC.com/%7Esmith/home.html
      http://ABC.com:/%7esmith/home.html

HTTP applications have historically allowed three different formats
for the representation of date/time stamps:

      Sun, 06 Nov 1994 08:49:37 GMT  ; RFC 822, updated by RFC 1123
      Sunday, 06-Nov-94 08:49:37 GMT ; RFC 850, obsoleted by RFC 1036
      Sun Nov  6 08:49:37 1994       ; ANSI C's asctime() format

The first format is preferred as an Internet standard and represents
a fixed-length subset of that defined by RFC 1123 [8] (an update to
RFC 822 [9]). The second format is in common use, but is based on the
obsolete RFC 850 [12] date format and lacks a four-digit year.
HTTP/1.1 clients and servers that parse the date value MUST accept
all three formats (for compatibility with HTTP/1.0), though they MUST
only generate the RFC 1123 format for representing HTTP-date values
in header fields.

The term "character set" is used in this document to refer to a
method used with one or more tables to convert a sequence of octets
into a sequence of characters.

3.5

