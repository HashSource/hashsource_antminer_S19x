int __fastcall sub_673B4(int a1, _DWORD *a2)
{
  int *v4; // r0
  _DWORD *v5; // r2
  int v6; // r4
  _DWORD *v7; // r3
  _DWORD *v8; // r1
  int v9; // r0
  _DWORD *v10; // r12
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int *i; // r5
  int v16; // r0
  int v17; // [sp+Ch] [bp-1Ch] BYREF
  char v18[4]; // [sp+10h] [bp-18h] BYREF
  int v19; // [sp+14h] [bp-14h] BYREF
  int v20; // [sp+18h] [bp-10h]
  int *v21; // [sp+1Ch] [bp-Ch]
  int *v22; // [sp+20h] [bp-8h]
  int v23; // [sp+24h] [bp-4h]

  v4 = (int *)sub_242FDC(a1);
  v5 = (_DWORD *)a2[1];
  v6 = *v4;
  if ( !v5[5] )
    goto LABEL_12;
  v7 = (_DWORD *)v5[2];
  v8 = v5 + 1;
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 12);
    v10 = v5 + 1;
    do
    {
      v11 = v7[4];
      if ( v11 < v9 )
        v7 = (_DWORD *)v7[3];
      else
        v10 = v7;
      if ( v11 >= v9 )
        v7 = (_DWORD *)v7[2];
    }
    while ( v7 );
    if ( v8 != v10 && v9 >= v10[4] )
    {
LABEL_12:
      v19 = 0;
      v20 = 0;
      v23 = 0;
      v21 = &v19;
      v22 = &v19;
      sub_2578AC(v6, 0);
      sub_257694(v6, "id", "i%d", *(_DWORD *)(a1 + 8));
      sub_2575E8(v6, "type", "process");
      if ( *(_BYTE *)(a1 + 148) )
      {
        v16 = sub_98C1C(*(_DWORD *)(a1 + 152), *(_DWORD *)(a1 + 156), 8, 0, 0, 1);
        sub_2575E8(v6, "exit-code", v16);
      }
      v12 = *(_DWORD *)(a1 + 12);
      if ( v12 )
      {
        sub_257504(v6, "pid", v12);
        v13 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 16);
        if ( !v13 )
        {
LABEL_17:
          if ( *(_DWORD *)(a1 + 12) )
          {
            v17 = *(_DWORD *)(a1 + 12);
            sub_23E4A0(sub_67354, &v17);
          }
          goto LABEL_19;
        }
      }
      else
      {
        v13 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 16);
        if ( !v13 )
        {
LABEL_19:
          if ( v23 )
          {
            sub_2578AC(v6, 1);
            for ( i = v21; i != &v19; i = (int *)sub_33AD50(i) )
              sub_257504(v6, 0, i[4]);
            sub_25734C(v6, 1);
          }
          if ( *a2 )
            sub_24164C(v6, 0, *(_DWORD *)(a1 + 12));
          sub_25734C(v6, 0);
          sub_68430(v18, v20);
          return 0;
        }
      }
      sub_2575E8(v6, "executable", v13);
      goto LABEL_17;
    }
  }
  return 0;
}
