int __fastcall sub_1B1F4(int result, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r6
  int i; // r4
  bool v11; // zf
  int v12; // r0
  int v13; // [sp+0h] [bp-8h]

  v6 = result;
  for ( i = 0; i != 16; ++i )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
        goto LABEL_2;
      v11 = v6 == 255;
      if ( v6 != 255 )
        v11 = i == v6;
      if ( !v11 )
        goto LABEL_2;
      v12 = (unsigned __int8)i;
      if ( a2 )
        break;
      LOWORD(v13) = a6;
      result = sub_750D8((unsigned __int8)i, a3, a4, a5, v13);
LABEL_2:
      if ( ++i == 16 )
        return result;
    }
    result = sub_75094(v12, a4, a5, a6);
  }
  return result;
}
