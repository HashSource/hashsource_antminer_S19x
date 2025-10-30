int sub_1BDD9C()
{
  _DWORD *v0; // r0
  int v1; // r1
  int result; // r0

  v0 = sub_93028(0x10u);
  v1 = dword_487C3C;
  v0[3] = &loc_1BD490;
  *v0 = v1;
  v0[2] = 5;
  dword_487C3C = (int)v0;
  v0[1] = 0;
  result = sub_534EC(
             "osabi",
             4,
             (int)&off_46DA34,
             (int)&dword_487C34,
             "Set OS ABI of target.",
             "Show OS ABI of target.",
             0,
             (int)sub_1BD36C,
             (int)sub_1BD2D8,
             (int **)&dword_47475C,
             (int **)&dword_47474C);
  dword_487C2C = 0;
  return result;
}
