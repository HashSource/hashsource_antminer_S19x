bool __fastcall sub_12B2A0(int a1, int *a2)
{
  int v4; // r7
  int v5; // r3
  int v6; // r3
  int v7; // r7
  const char *v8; // r2
  int v9; // r6
  int v10; // r1
  int v11; // r5
  const char *v12; // r0
  int v14; // r8
  const char *v15; // r5
  int v16; // r6
  int v17; // r9
  int v18; // r3
  int v19; // r7
  const char *v20; // r2
  int v21; // r1
  int v22; // r12
  int v23; // lr
  const char *v24; // r0
  int v25; // t1
  int v26; // [sp+24h] [bp-30h] BYREF
  int v27; // [sp+28h] [bp-2Ch]
  int v28; // [sp+2Ch] [bp-28h]
  int v29; // [sp+30h] [bp-24h]
  int v30; // [sp+34h] [bp-20h]
  int v31; // [sp+38h] [bp-1Ch]

  if ( !sub_12AAA0(&v26, a2) )
  {
    sub_B69CC(a1, (int)"Bad time value", 14);
    return 0;
  }
  v4 = *a2;
  v5 = a2[2];
  if ( *(_BYTE *)(v5 + *a2 - 1) == 90 )
  {
    if ( a2[1] != 24 )
    {
      v6 = v29;
      v7 = v28;
      v8 = (char *)&unk_1CAB48 + 4 * v30;
      v10 = v31 + 1900;
      v9 = v27;
      v11 = v26;
      v12 = " GMT";
      return sub_B550C(a1, "%s %2d %02d:%02d:%02d %d%s", v8, v6, v7, v9, v11, v10, v12) > 0;
    }
    if ( v4 > 15 )
    {
      v14 = 1;
      goto LABEL_9;
    }
    v16 = 0;
    v15 = 0;
    v18 = v29;
    v19 = v28;
    v20 = (char *)&unk_1CAB48 + 4 * v30;
    v21 = v31 + 1900;
    v22 = v27;
    v23 = v26;
    v24 = " GMT";
  }
  else
  {
    if ( a2[1] != 24 )
    {
      v6 = v29;
      v7 = v28;
      v8 = (char *)&unk_1CAB48 + 4 * v30;
      v9 = v27;
      v10 = v31 + 1900;
      v11 = v26;
      v12 = &byte_1A4198;
      return sub_B550C(a1, "%s %2d %02d:%02d:%02d %d%s", v8, v6, v7, v9, v11, v10, v12) > 0;
    }
    if ( v4 > 15 )
    {
      v14 = 0;
LABEL_9:
      if ( *(_BYTE *)(v5 + 14) == 46 )
      {
        v15 = (const char *)(v5 + 14);
        v16 = 1;
        v17 = v5 + 14;
        do
        {
          v25 = *(unsigned __int8 *)++v17;
          if ( !sub_BDB60(v25) )
            break;
          ++v16;
        }
        while ( v4 > v16 + 14 );
      }
      else
      {
        v16 = 0;
        v15 = 0;
      }
      v18 = v29;
      v19 = v28;
      v20 = (char *)&unk_1CAB48 + 4 * v30;
      v21 = v31 + 1900;
      v22 = v27;
      v23 = v26;
      if ( v14 )
        v24 = " GMT";
      else
        v24 = &byte_1A4198;
      return sub_B550C(a1, "%s %2d %02d:%02d:%02d%.*s %d%s", v20, v18, v19, v22, v23, v16, v15, v21, v24) > 0;
    }
    v16 = 0;
    v15 = 0;
    v18 = v29;
    v19 = v28;
    v20 = (char *)&unk_1CAB48 + 4 * v30;
    v21 = v31 + 1900;
    v22 = v27;
    v23 = v26;
    v24 = &byte_1A4198;
  }
  return sub_B550C(a1, "%s %2d %02d:%02d:%02d%.*s %d%s", v20, v18, v19, v22, v23, v16, v15, v21, v24) > 0;
}
