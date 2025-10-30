int __fastcall sub_12F8FC(int a1, unsigned int *a2, unsigned int *a3, _DWORD *a4)
{
  unsigned __int16 *v4; // r4
  int result; // r0
  unsigned int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r3
  int v12; // r3
  bool v13; // zf
  unsigned int v14; // [sp+8h] [bp-Ch] BYREF
  unsigned int v15; // [sp+Ch] [bp-8h] BYREF

  v4 = *(unsigned __int16 **)(a1 + 12);
  result = sub_12EF34((_WORD *)a1, &v14, &v15, a4, 0);
  if ( result > 1 )
  {
    v9 = *a2;
    v10 = v15;
    if ( *a2 >= v14 )
      v9 = v14;
    *a2 = v9;
    v11 = *a3;
    if ( *a3 < v10 )
      v11 = v10;
    *a3 = v11;
  }
  if ( a4[16] == 14 && v4 )
  {
    do
    {
      v12 = *v4;
      if ( !*v4 )
        break;
      v13 = v12 == 11;
      if ( v12 != 11 )
        v13 = v12 == 46;
      if ( v13 )
        result = sub_12F8FC(v4, a2);
      v4 = (unsigned __int16 *)*((_DWORD *)v4 + 4);
    }
    while ( v4 );
  }
  return result;
}
