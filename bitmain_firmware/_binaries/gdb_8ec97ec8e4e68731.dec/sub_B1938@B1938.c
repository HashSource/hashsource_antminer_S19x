int sub_B1938()
{
  dword_4781EC = sub_1CD114();
  dword_4781E8 = sub_183648();
  sub_1B8BD0(719676);
  sub_1B963C(719780);
  sub_5398C("tasks", (int)sub_B1624, (int)"Provide information about all known Ada tasks");
  return sub_53274(
           "task",
           0,
           (int)sub_B0C14,
           (int)"Use this command to switch between Ada tasks.\n"
                "Without argument, this command simply prints the current task ID",
           (int **)&dword_474744);
}
