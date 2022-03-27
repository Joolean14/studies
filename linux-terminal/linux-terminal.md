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
**/proc** Virtual file system mantained by the Linux kernel