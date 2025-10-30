void __fastcall sub_132968(int *a1, const char *a2)
{
  _DWORD *v3; // r0
  char *v4; // r1
  bool v5; // zf
  char *v6; // r1
  const char *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  if ( (unsigned int)dword_4872E4 > 1 )
  {
    v3 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v3, "Adding dir %zu: %s\n", ((a1[10] - a1[9]) >> 2) + 1, v7);
  }
  v4 = (char *)a1[10];
  if ( v4 == (char *)a1[11] )
  {
    sub_3E040(a1 + 9, v4, &v7);
  }
  else
  {
    v5 = v4 == 0;
    v6 = v4 + 4;
    if ( !v5 )
      *((_DWORD *)v6 - 1) = v7;
    a1[10] = (int)v6;
  }
}
