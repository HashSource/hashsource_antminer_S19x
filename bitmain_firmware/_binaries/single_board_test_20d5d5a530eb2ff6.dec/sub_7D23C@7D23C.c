int __fastcall sub_7D23C(_DWORD *a1)
{
  unsigned __int16 *v2; // r3
  unsigned __int16 *v4; // r0
  unsigned __int16 *v5; // r5
  __int16 *v6; // r3
  __int16 v7; // r2
  int v8; // [sp+Ch] [bp-4h] BYREF

  if ( !sub_A8748(*(_DWORD *)(a1[974] + 32)) )
  {
LABEL_16:
    v6 = (__int16 *)a1[974];
    v7 = *v6;
    v6[18] = *v6;
    v6[14] = v7 + 1;
    return 1;
  }
  v2 = (unsigned __int16 *)a1[974];
  if ( v2[14] == *v2 && !a1[413] )
  {
    while ( sub_A8748(*((_DWORD *)v2 + 8)) )
    {
      sub_7C7A8((int)a1, a1[974] + 28);
      v4 = sub_7D204((int)a1, (int)(a1 + 574), &v8);
      v5 = v4;
      if ( !v4 )
      {
        sub_95494(a1, 80, 424, 68, "ssl/record/rec_layer_d1.c", 267);
        return 0;
      }
      if ( sub_A87B0(a1, v4) && sub_80CA8(a1, v5) )
      {
        if ( sub_7C644(a1, a1[974] + 36, (int)(a1 + 584)) < 0 )
          return 0;
      }
      else
      {
        if ( sub_95D8C(a1) )
          return -1;
        a1[576] = 0;
        a1[959] = 0;
      }
      v2 = (unsigned __int16 *)a1[974];
    }
    goto LABEL_16;
  }
  return 1;
}
