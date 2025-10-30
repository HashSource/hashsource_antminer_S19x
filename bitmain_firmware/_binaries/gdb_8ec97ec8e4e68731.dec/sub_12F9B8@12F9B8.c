int __fastcall sub_12F9B8(int a1, _DWORD *a2, unsigned int *a3, _DWORD *a4)
{
  int result; // r0
  unsigned int v9; // r3
  unsigned __int16 *i; // r4
  int v11; // r3
  unsigned int v12; // r3
  unsigned int v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // [sp+8h] [bp-14h] BYREF
  unsigned int v16; // [sp+Ch] [bp-10h] BYREF
  unsigned int v17; // [sp+10h] [bp-Ch] BYREF
  unsigned int v18[2]; // [sp+14h] [bp-8h] BYREF

  v16 = 0;
  v15 = -1;
  result = sub_12EF34((_WORD *)a1, &v17, v18, a4, 0);
  if ( result <= 1 )
  {
    for ( i = *(unsigned __int16 **)(a1 + 12); i; i = (unsigned __int16 *)*((_DWORD *)i + 4) )
    {
      v11 = *i;
      if ( !*i )
        break;
      if ( v11 == 46 )
      {
        result = sub_12F8FC((int)i, &v15, &v16, a4);
      }
      else if ( v11 == 57 || v11 == 30 )
      {
        result = sub_12F9B8(i, &v17, v18, a4);
        v13 = v17;
        if ( v17 != -1 )
        {
          v14 = v16;
          result = v18[0];
          if ( v15 < v17 )
            v13 = v15;
          v15 = v13;
          if ( v16 < v18[0] )
            v14 = v18[0];
          v16 = v14;
        }
      }
    }
    v12 = v16;
    *a2 = v15;
    *a3 = v12;
  }
  else
  {
    v9 = v18[0];
    *a2 = v17;
    *a3 = v9;
  }
  return result;
}
