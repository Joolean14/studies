# Commands

date
cal
df
free
exit

relative, absolute paths

pwd
cd -  Previous
cd ~

ls ~
ls 
ls -l
file

# Directories

**/** Root
**/bin** Contains binaries that must be present for the system to boot and run
**/boot** Linux kernel, initial RAM disk image, boot loader
**/boot/grub/grub.conf or menu.lst** Used to configure boot loader
**/boot/vmlinuz** Linux kernel
**/dev** Device nodes
**/etc** System-wide configuration files, shell scripts that start each of the system services at boot time
**/etc/crontab** Defines when automated jobs will run
**/etc/passwd** List of user accounts
**/home** Each user is given a directory in /home. Ordinary users can only write files in their home directories. This limitation protects the system from errant user activity.
**/lib** Contains shared library files used by the core system programs.
**/lost+found** Each formatted partition or device using a linux file system will have this directory. It is used in case of a partial recovery from a file system corruption event. Unless something really bad happens to your system, this directory will remain empty.
**media** Mount points for removable media such as USB drives, CD-ROMS, etc that are mounted automatically at insertion.
**/mnt** On older Linux systems this directory contains points for removable devices that have been mounted manually.
**/opt** This directory is used to install 'optional' software. Commercial software products that might be installed on the system.
**/proc** Virtual file system mantained by the Linux kernel. 'Peepholes into the kernel'.
**/root** Home directory for the root account.
**/sbin** System binaries. Vital system tasks reserved for the superuser.
**/tmp** Storage of temporary transient files created by various programs. Some configurations cause this directory to be emptied each time the system is rebooted.
**/usr** Contains all programs and support files used by regular users.
**/usr/bin** Executable programs installed by the Linux distro.
**/usr/lib** Shared libraries for the programs in /usr/bin.
**/usr/local** Directory where programs that are not included in the distro but are intended for system-wide use are installed.
**/usr/sbin** Contains more system administration programs.
**/usr/share** Contains all the shared data used by programs in /usr/bin.
**/usr/share/doc** Installed packages docs.
**/var** Data that is likely to change is stored. Various databases, spool files, user mail...
**/var/log** Records of various system activity.

# Manipulating Files and Directories

cp
mv
mkdir
rm
ln 

**Wildcards**

* - matches any characters
? - matched any single character
[characters] - matches any character that is a member of the set characters
[!characters] - matches any character that is not a member of the set characters 

[[:class:]] - matches any character that is a member of the specified class
[:alnum:] - alphanumeric
[:alpha:] - alphabetic
[:digit:] - numeral
[:lower:] - lowercase
[:upper:] - uppercase

*examples page 26 of the book*
*test wildcards first with ls**

**cp**

**-i --interactive** - Before overwriting an existing file, prompt the user for confirmation. If this option is not specified, cp will silently overwrite files. 
**-r --recursive** -  Recursively copy directories and their contents. Required for copying directories.
**-u --update** - Only copy files that either don't exist or are newer than the existing corresponding files.
**-v --verbose** Display informative messages as the copy is performed.

**mv**

**-i --interactive** - Before overwriting an existing file, prompt the user for confirmation. If this option is not specified, cp will silently overwrite files
**-u --update** - Only move files that either don't exist or are newer than the existing corresponding files.
**-v --verbose** Display informative messages as the move is performed.

**rm**

**-i --interactive** - Before deleting an existing file, prompt the user for confirmation. If this option is not specified, cp will silently delete files
**-f --force** - Ignore nonexistent files and do not prompt. This overrides the --interactive option.
**-v --verbose** Display informative messages as the move is performed.


?????????????????????????????????????????????????????????????????????????
**SYMBOLIC LINKS**
?????????????????????????????????????????????????????????????????????????


# Working with commands


