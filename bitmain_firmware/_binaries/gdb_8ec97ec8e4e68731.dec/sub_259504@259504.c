void __fastcall sub_259504(const char *a1, int a2)
{
  char *v3; // r6
  size_t v4; // r5
  int *v5; // r0
  int *v6; // r0
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  v3 = sub_6FF98(a2);
  strlen(v3);
  v4 = strlen(a1);
  memcpy(savedregs, a1, v4);
  *(_WORD *)((char *)savedregs + v4) = 8250;
  strcpy((char *)savedregs + v4 + 2, v3);
  v5 = (int *)sub_242F8C();
  sub_25680C(*v5);
  v6 = (int *)sub_242FB4();
  sub_2594B0(*v6, "%s.\n", (const char *)savedregs);
}
