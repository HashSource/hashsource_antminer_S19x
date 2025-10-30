void __fastcall sub_35EF0(_DWORD *a1, _DWORD *a2)
{
  int *v2; // r6
  int v4; // r8
  int v5; // r7
  int v6; // r5
  void *src; // r7
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r11
  int v12; // r10
  int v13; // r9
  int v14; // r1
  bool v15; // zf
  int v16; // r1
  int v17; // r2
  int v18; // r0
  int v19; // r10
  __int64 v20; // r0
  int v21; // r0
  int v22; // [sp+10h] [bp-4Ch]
  int v23; // [sp+10h] [bp-4Ch]
  int v24; // [sp+14h] [bp-48h]
  _DWORD v25[4]; // [sp+1Ch] [bp-40h] BYREF
  int v26; // [sp+2Ch] [bp-30h]
  int v27; // [sp+30h] [bp-2Ch]
  int v28; // [sp+34h] [bp-28h]
  _DWORD v29[3]; // [sp+38h] [bp-24h] BYREF
  int v30; // [sp+44h] [bp-18h]
  int v31; // [sp+48h] [bp-14h]
  int v32; // [sp+4Ch] [bp-10h]
  int v33; // [sp+50h] [bp-Ch]
  int v34; // [sp+54h] [bp-8h]

  v2 = a1 + 2;
  v4 = sub_1DDB0C(a1[2], a1[3], a1[4], *a2);
  sub_2322B4(v4, -1);
  v5 = *a2;
  v6 = ((int (__fastcall *)(_DWORD))loc_16CA74)(*a2);
  if ( v6 )
  {
    v26 = dword_4878EC;
    v27 = dword_4878F0;
    v28 = dword_4878F4;
    v16 = v2[1];
    v17 = v2[2];
    dword_4878EC = *v2;
    dword_4878F0 = v16;
    dword_4878F4 = v17;
    v18 = ((int (__fastcall *)(int))loc_16CAC0)(v5);
    v19 = *(_DWORD *)(v18 + 20);
    v23 = v18;
    if ( v19 )
    {
      v21 = sub_9836C(v19);
      v6 = v21 + v19;
      src = (void *)v21;
    }
    else
    {
      src = 0;
      v6 = 0;
    }
    LODWORD(v20) = sub_22FF08(&dword_4899A0, 16);
    if ( v20 != *(_DWORD *)(v23 + 20) )
      v6 = (int)src;
    dword_4878EC = v26;
    dword_4878F0 = v27;
    dword_4878F4 = v28;
  }
  else
  {
    src = 0;
  }
  v8 = v2[1];
  v9 = v2[2];
  v10 = a2[3];
  v11 = a2[1];
  v25[0] = *v2;
  v25[1] = v8;
  v25[2] = v9;
  v12 = a2[2];
  v22 = v10;
  v24 = a2[4];
  v13 = sub_1DD58C(v4);
  v29[0] = v13;
  v29[1] = v4;
  v29[2] = v11;
  v30 = v12;
  v31 = v22;
  v33 = v24;
  v34 = 0;
  v32 = sub_98F68(v25);
  if ( !v32 )
    v32 = sub_98F70(v25);
  ((void (__fastcall *)(int, void *, _DWORD *, int))loc_16B1BC)(v13, &loc_34900, v29, v4);
  v14 = v30;
  v15 = v30 == 0;
  a2[2] = v30;
  if ( !v15 && (void *)v6 != src )
    a2[2] = sub_2DA3B0(a2[1], v14, a2[3], (int)"CORE", 1397311305, src, v6 - (_DWORD)src);
  if ( src )
    sub_339E64(src);
}
