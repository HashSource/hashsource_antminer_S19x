int __fastcall sub_A2838(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r8
  int v5; // r3
  unsigned int v6; // lr
  int v7; // r7
  unsigned int v8; // r9
  unsigned __int16 *v9; // r2
  int v10; // r4
  int v11; // r3
  int v12; // t1
  unsigned __int16 *v13; // r3
  int v14; // r2
  int v15; // [sp+0h] [bp-14h] BYREF
  unsigned __int16 *v16; // [sp+4h] [bp-10h] BYREF
  unsigned int v17; // [sp+8h] [bp-Ch] BYREF
  int v18; // [sp+Ch] [bp-8h] BYREF

  result = a1[7];
  if ( result )
  {
    v4 = a2;
    if ( a2 == -2 )
    {
      if ( (*(_DWORD *)(a1[257] + 16) & 0x30000) != 0 )
      {
        v14 = *(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 12);
        if ( v14 == 50380843 )
          return 23;
        if ( v14 == 50380844 )
          return 24;
        return 0;
      }
      v4 = 0;
    }
    if ( (a1[315] & 0x400000) != 0 )
    {
      sub_A278C(a1, &v15, (int *)&v17);
      v13 = (unsigned __int16 *)a1[351];
      v18 = a1[350];
      v16 = v13;
    }
    else
    {
      v5 = a1[351];
      v17 = a1[350];
      v15 = v5;
      sub_A278C(a1, &v16, &v18);
    }
    v6 = v17;
    LOWORD(v7) = v17;
    if ( v17 )
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = v16;
          v10 = *(unsigned __int16 *)(v15 + 2 * v8);
          if ( v18 )
            break;
LABEL_13:
          if ( ++v8 >= v6 )
            goto LABEL_14;
        }
        if ( *v16 != v10 )
        {
          v11 = 0;
          while ( v18 != ++v11 )
          {
            v12 = v9[1];
            ++v9;
            if ( v12 == v10 )
              goto LABEL_19;
          }
          goto LABEL_13;
        }
LABEL_19:
        if ( sub_A2808((int)a1, *(unsigned __int16 *)(v15 + 2 * v8), (int)&loc_20004 + 1) )
        {
          if ( v4 == v7 )
            return v10;
          v6 = v17;
          ++v8;
          ++v7;
          if ( v8 >= v17 )
            break;
        }
        else
        {
          v6 = v17;
          if ( ++v8 >= v17 )
            break;
        }
      }
    }
LABEL_14:
    if ( v4 == -1 )
      return (unsigned __int16)v7;
    return 0;
  }
  return result;
}
