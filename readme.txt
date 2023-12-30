nd is inspired by the AEGIS nd, by default when not specified with a directory to store, it will always go to the user's home directory. However when set with a directory to go to, once invoked without arguments- it will magically "cd" it's way to there.

nd stores it's (single so far now) directory destination via [a exclusive clipboard!?](on amigaOS, the 256th clipboard is used unless someone points out that a pre-existing app uses it)

nd is a somewhat odd example of a terminate & stay resident app for what is a true multi-tasking system. But that's on purpose.

arguments for nd:

 none = go to "named directory"

 with a valid directory path = set "named directory"

 -p = show path of "named directory"

nd uses standard errors for when somthing does go wrong.

at this point until someone decides to add them in, nd does not support multibyte character directories at the moment.