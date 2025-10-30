int sub_2416DC()
{
  sub_5398C(
    "threads",
    (int)sub_241670,
    (int)"Display currently known threads.\n"
         "Usage: info threads [-gid] [ID]...\n"
         "-gid: Show global thread IDs.\n"
         "If ID is given, it is a space-separated list of IDs of threads to display.\n"
         "Otherwise, all threads are displayed.");
  sub_533F8(
    "thread",
    0,
    (int)sub_24063C,
    (int)"Use this command to switch between threads.\nThe new thread ID must be currently known.",
    &dword_48A4E4,
    (int)"thread ",
    1,
    (int **)&dword_474744);
  sub_533F8(
    "apply",
    0,
    (int)sub_2401AC,
    (int)"Apply a command to a list of threads.",
    &dword_48A4E8,
    (int)"thread apply ",
    1,
    &dword_48A4E4);
  sub_53274(
    "all",
    0,
    (int)&loc_2418AC,
    (int)"Apply a command to all threads.\n"
         "\n"
         "Usage: thread apply all [-ascending] <command>\n"
         "-ascending: Call <command> for all threads in ascending order.\n"
         "            The default is descending order.",
    &dword_48A4E8);
  sub_53274(
    "name",
    0,
    (int)sub_23DC80,
    (int)"Set the current thread's name.\n"
         "Usage: thread name [NAME]\n"
         "If NAME is not given, then any existing name is removed.",
    &dword_48A4E4);
  sub_53274(
    "find",
    0,
    (int)sub_2407EC,
    (int)"Find threads that match a regular expression.\n"
         "Usage: thread find REGEXP\n"
         "Will display thread ids whose name, target ID, or extra info matches REGEXP.",
    &dword_48A4E4);
  sub_547B0((int)"t", "thread", 0, 1);
  sub_535B8(
    "thread-events",
    -1,
    (int)&dword_46DCD4,
    "Set printing of thread events (such as thread start and exit).",
    "Show printing of thread events (such as thread start and exit).",
    0,
    0,
    (int)sub_23D92C,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_26CB90("_thread", &off_3EB7A4, 0);
  return sub_26CB90("_gthread", &off_3EB7B0, 0);
}
