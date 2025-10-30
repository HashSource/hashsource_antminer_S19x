int __fastcall sub_E7D04(int a1, int a2, int a3, int a4, const char *a5, int a6, int a7)
{
  const char *v11; // r4
  int v12; // r0
  unsigned int v13; // r0
  const char *v15; // [sp+1Ch] [bp-4h] BYREF

  v11 = a5;
  v12 = sub_170040(a2);
  v13 = sub_E7AF4(a2, v12, &v15) & 0xFFFFFFFB;
  switch ( v13 )
  {
    case 2u:
      sub_25A6BC("u", a1);
      break;
    case 3u:
      sub_25A6BC("U", a1);
      break;
    case 1u:
      sub_25A6BC("L", a1);
      break;
  }
  if ( !a5 || !*a5 )
    v11 = v15;
  return sub_2691D8(a1, a2, a3, a4, (int)v11, a6, 34, 1, a7);
}
