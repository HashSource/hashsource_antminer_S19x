int __fastcall sub_1823C(int a1, unsigned __int16 *a2)
{
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v4, 0x800u, "[chain %d]\n", a1);
    sub_47AB4(3, v4, 0);
  }
  sub_17AF8((int)a2);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    *(_WORD *)v4 = 10;
    sub_47EC8(3, v4, 0);
  }
  sub_17CE0(a2);
  return sub_17FF8((int)a2);
}
