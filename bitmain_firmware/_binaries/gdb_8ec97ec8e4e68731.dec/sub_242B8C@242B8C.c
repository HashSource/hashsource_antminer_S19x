int __fastcall sub_242B8C(int a1, int a2)
{
  int v3; // r4
  int v4; // r0
  int *v5; // r3
  int v6; // r3

  off_487664 = sub_242C38;
  v3 = sub_2978A8();
  v4 = sub_297FE4();
  LOWORD(v5) = (unsigned __int16)&dword_490158;
  if ( v4 )
  {
    HIWORD(v5) = (unsigned int)&dword_490158 >> 16;
    v6 = *v5;
    if ( v6 >= dword_490160 || v6 - 1 <= v3 )
      goto LABEL_3;
LABEL_7:
    dword_46DCD8 = v3 + 1;
    return sub_295A9C(1, a2);
  }
  HIWORD(v5) = (unsigned int)&dword_490158 >> 16;
  if ( *v5 - 1 > v3 )
    goto LABEL_7;
LABEL_3:
  dword_46DCD8 = v3;
  return sub_295A9C(1, a2);
}
