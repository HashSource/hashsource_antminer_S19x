int sub_67288()
{
  int v0; // r0
  int v1; // r0

  sub_535B8(
    "mi-async",
    0,
    (int)&dword_474860,
    "Set whether MI asynchronous mode is enabled.",
    "Show whether MI asynchronous mode is enabled.",
    "Tells GDB whether MI should be in asynchronous mode.",
    (int)sub_62F44,
    (int)sub_62EBC,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  v0 = sub_54724((int)"target-async", (unsigned __int8 *)"mi-async", 0, 0, &dword_47475C);
  sub_532A8(v0, (int)"set mi-async");
  v1 = sub_54724((int)"target-async", (unsigned __int8 *)"mi-async", 0, 0, &dword_47474C);
  return sub_532A8(v1, (int)"show mi-async");
}
