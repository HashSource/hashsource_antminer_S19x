int __fastcall sub_7E3D8(int a1, int a2, int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v6; // r8
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int result; // r0
  int v13; // r3
  unsigned int v14; // r7
  unsigned int v15; // r6
  int v16; // r0
  unsigned int v17; // r3
  int v18; // r0
  int v19; // r0
  bool v20; // zf
  int v21; // r3
  unsigned int v22; // r4
  unsigned int v23; // r0
  int *v24; // r3
  int v25; // r3
  unsigned int v26; // r1
  unsigned int v27; // r3
  unsigned int v28; // r0
  int v29; // r2
  int v30; // r3
  unsigned int v32; // [sp+1Ch] [bp-98h]
  unsigned int v33; // [sp+20h] [bp-94h]
  unsigned int v34; // [sp+24h] [bp-90h]
  int v35; // [sp+2Ch] [bp-88h] BYREF
  _DWORD v36[33]; // [sp+30h] [bp-84h] BYREF

  v6 = *(_DWORD *)(a1 + 3840);
  *(_DWORD *)(a1 + 20) = 1;
  if ( v6 > a4 )
    goto LABEL_66;
  if ( *(_DWORD *)(a1 + 1672) )
  {
    if ( a4 >= *(_DWORD *)(a1 + 3856) + v6 )
    {
      if ( *(_DWORD *)(a1 + 104) != 4 )
      {
        *(_DWORD *)(a1 + 3840) = 0;
        goto LABEL_8;
      }
      goto LABEL_19;
    }
LABEL_66:
    sub_95494(a1, 80, 158, 271, "ssl/record/rec_layer_s3.c", 376);
    return -1;
  }
  if ( *(_DWORD *)(a1 + 104) != 4 )
  {
    *(_DWORD *)(a1 + 3840) = 0;
LABEL_6:
    if ( *(_DWORD *)(a1 + 1520) != -1 )
      sub_95D9C(a1, 1);
    goto LABEL_8;
  }
LABEL_19:
  if ( !sub_7F228(a1, a4, 0, 1) )
    return -1;
  v13 = *(_DWORD *)(a1 + 1672);
  *(_DWORD *)(a1 + 3840) = 0;
  if ( !v13 )
    goto LABEL_6;
LABEL_8:
  if ( sub_95448(a1) && !sub_95DA0(a1) && *(_DWORD *)(a1 + 104) != 6 )
  {
    result = (*(int (__fastcall **)(int))(a1 + 24))(a1);
    if ( result < 0 )
      return result;
    if ( !result )
      return -1;
  }
  v11 = *(_DWORD *)(a1 + 1672);
  if ( v11 )
  {
    result = sub_7D810((_DWORD *)a1, a2, a3 + v6, *(_DWORD *)(a1 + 3856), &v35);
    if ( result <= 0 )
    {
LABEL_62:
      *(_DWORD *)(a1 + 3840) = v6;
      return result;
    }
    v11 = v35;
    v6 += v35;
  }
  if ( v6 != a4 )
  {
    v14 = a4 - v6;
    v15 = sub_8CD40(a1, v9, v10, v11);
    v16 = sub_8CD60(a1);
    v17 = *(_DWORD *)(a1 + 1296);
    v34 = v16;
    v33 = v17;
    if ( v17 > 0x20 )
    {
      v30 = 582;
    }
    else
    {
      if ( !v17
        || (v18 = *(_DWORD *)(a1 + 1004)) == 0
        || (v19 = sub_D8920(v18), (sub_D8928(v19) & 0x800000) == 0)
        || (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 1) == 0 )
      {
        v33 = 1;
      }
      v20 = v34 == 0;
      if ( v34 )
        v20 = v15 == 0;
      v21 = v20;
      if ( v15 < v34 )
        v21 |= 1u;
      if ( !v21 )
      {
        while ( 1 )
        {
          v22 = 1;
          if ( v14 )
          {
            v22 = sub_189090(v14 - 1, v34) + 1;
            if ( v22 >= v33 )
              v22 = v33;
          }
          v23 = sub_189090(v14, v22);
          if ( v15 > v23 )
          {
            v32 = v23;
            sub_1892EC(v14, v22);
            v27 = 0;
            do
            {
              if ( v26 <= v27 )
                v28 = v32;
              else
                v28 = v32 + 1;
              v36[v27++] = v28;
            }
            while ( v22 != v27 );
          }
          else
          {
            v24 = &v35;
            do
            {
              v24[1] = v15;
              ++v24;
            }
            while ( v24 != &v36[v22 - 1] );
          }
          result = sub_7D934(a1, a2, a3 + v6, (int)v36, v22, 0, &v35);
          if ( result <= 0 )
            goto LABEL_62;
          v25 = v35;
          if ( v14 == v35 )
            break;
          if ( a2 == 23 && (*(_DWORD *)(a1 + 1264) & 1) != 0 )
          {
            *(_DWORD *)(*(_DWORD *)(a1 + 124) + 208) = 0;
LABEL_54:
            *a5 = v25 + v6;
            return 1;
          }
          v14 -= v35;
          v6 += v35;
        }
        v29 = *(_DWORD *)(a1 + 1264) << 27;
        *(_DWORD *)(*(_DWORD *)(a1 + 124) + 208) = 0;
        if ( v29 < 0 && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) == 0 )
        {
          sub_7F15C(a1);
          v25 = v35;
        }
        goto LABEL_54;
      }
      v30 = 598;
    }
    sub_95494(a1, 80, 158, 68, "ssl/record/rec_layer_s3.c", v30);
    return -1;
  }
  if ( (*(_DWORD *)(a1 + 1264) & 0x10) != 0 && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) == 0 )
    sub_7F15C(a1);
  result = 1;
  *a5 = v6;
  return result;
}
