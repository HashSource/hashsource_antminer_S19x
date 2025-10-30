int __fastcall sub_17A90C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r8
  int v6; // r11
  _BYTE *v7; // r3
  int v8; // r2
  _BYTE *v9; // r3
  int v10; // r2
  _DWORD *v11; // r9
  int v12; // r0
  _DWORD *v13; // lr
  int v14; // r2
  int v15; // r5
  int v17; // r4
  int v18; // r0
  int v19; // r0
  int v20; // r4
  _DWORD *v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  void *v26; // r0
  void *v27; // [sp+0h] [bp-20h] BYREF
  int v28; // [sp+4h] [bp-1Ch]
  _DWORD v29[4]; // [sp+8h] [bp-18h] BYREF
  void *v30; // [sp+18h] [bp-8h] BYREF
  int v31; // [sp+1Ch] [bp-4h]
  _DWORD v32[4]; // [sp+20h] [bp+0h] BYREF
  void *ptr; // [sp+30h] [bp+10h] BYREF
  int v34; // [sp+34h] [bp+14h]
  _DWORD v35[4]; // [sp+38h] [bp+18h] BYREF
  void *v36; // [sp+48h] [bp+28h] BYREF
  int v37; // [sp+4Ch] [bp+2Ch]
  _DWORD v38[5]; // [sp+50h] [bp+30h] BYREF

  v27 = v29;
  v28 = 0;
  LOBYTE(v29[0]) = 0;
  v31 = 0;
  LOBYTE(v32[0]) = 0;
  v30 = v32;
  if ( ((int (*)(void))sub_26C094)() == 1 )
    a1 = sub_26EA24(a1);
  v2 = (_DWORD *)sub_26BC70(a1);
  v3 = sub_171258(v2);
  v4 = *(_DWORD *)(v3 + 24);
  if ( *(_BYTE *)v4 == 18 )
    v3 = sub_171258(*(_DWORD **)(v4 + 20));
  v5 = ((int (__fastcall *)(_DWORD, _DWORD, int))loc_170478)(0, 0, v3);
  v6 = sub_170040(v5);
  sub_255DE4(&ptr, v5);
  v7 = v27;
  if ( ptr == v35 )
  {
    sub_33B48C(&v27, &ptr);
    v7 = ptr;
  }
  else
  {
    if ( v27 == v29 )
    {
      v27 = ptr;
      v28 = v34;
      v29[0] = v35[0];
    }
    else
    {
      v27 = ptr;
      v28 = v34;
      v8 = v29[0];
      v29[0] = v35[0];
      if ( v7 )
      {
        ptr = v7;
        v35[0] = v8;
        goto LABEL_9;
      }
    }
    ptr = v35;
    v7 = v35;
  }
LABEL_9:
  v34 = 0;
  *v7 = 0;
  if ( ptr != v35 )
    sub_339E64(ptr);
  if ( !v28 )
    sub_946E0("cannot find typeinfo for unnamed type");
  sub_FFE48((int)&v36, (char *)v27);
  v9 = v30;
  if ( v36 == v38 )
  {
    sub_33B48C(&v30, &v36);
    v9 = v36;
  }
  else
  {
    if ( v30 == v32 )
    {
      v30 = v36;
      v31 = v37;
      v32[0] = v38[0];
    }
    else
    {
      v30 = v36;
      v31 = v37;
      v10 = v32[0];
      v32[0] = v38[0];
      if ( v9 )
      {
        v36 = v9;
        v38[0] = v10;
        goto LABEL_16;
      }
    }
    v36 = v38;
    v9 = v38;
  }
LABEL_16:
  v37 = 0;
  *v9 = 0;
  if ( v36 != v38 )
    sub_339E64(v36);
  if ( v31 )
    sub_33B48C(&v27, &v30);
  v11 = (_DWORD *)sub_17A640();
  if ( **(_BYTE **)(v5 + 24) == 3 && sub_26C094(a1) == 1 && sub_179034((_DWORD *)v5) )
  {
    v17 = ((int (__fastcall *)(int))loc_26C09C)(a1);
    v18 = sub_26BFE0(a1);
    v19 = ((int (__fastcall *)(int, int, int))loc_179644)(v6, v5, v17 + v18);
    if ( !v19 )
      sub_946E0("cannot find typeinfo for object of type '%s'", (const char *)v27);
    v20 = sub_26F824(v19, 2);
    v21 = sub_170090(v11, 0);
    v22 = sub_2647C8(v21, v20);
    v15 = sub_26210C(v22);
  }
  else
  {
    v36 = v38;
    sub_17A69C(&v36, "typeinfo for ", (int)"");
    v12 = sub_33C320(&v36, v27, v28);
    ptr = v35;
    v13 = (_DWORD *)(v12 + 8);
    if ( *(_DWORD *)v12 == v12 + 8 )
    {
      v23 = *(_DWORD *)(v12 + 12);
      v24 = *(_DWORD *)(v12 + 16);
      v25 = *(_DWORD *)(v12 + 20);
      v35[0] = *v13;
      v35[1] = v23;
      v35[2] = v24;
      v35[3] = v25;
    }
    else
    {
      ptr = *(void **)v12;
      v35[0] = *(_DWORD *)(v12 + 8);
    }
    v34 = *(_DWORD *)(v12 + 4);
    *(_DWORD *)v12 = v13;
    *(_DWORD *)(v12 + 4) = 0;
    *(_BYTE *)(v12 + 8) = 0;
    if ( v36 != v38 )
      sub_339E64(v36);
    sub_1B141C((int)&v36, (char *)ptr);
    if ( !v36 )
      sub_946E0("could not find typeinfo symbol for '%s'", (const char *)v27);
    v14 = *((__int16 *)v36 + 11);
    if ( v14 == -1 )
    {
      sub_94700((int)"gnu-v3-abi.c", 1123, "Section index is uninitialized");
      if ( ptr != v35 )
        sub_339E64(ptr);
      if ( v30 != v32 )
        sub_339E64(v30);
      v26 = v27;
      if ( v27 != v29 )
        sub_339E64(v27);
      sub_338FFC(v26);
    }
    v15 = sub_260F84(v11, *((_DWORD *)v36 + 2) + *(_DWORD *)(*(_DWORD *)(v37 + 144) + 4 * v14));
    if ( ptr != v35 )
      sub_339E64(ptr);
  }
  if ( v30 != v32 )
    sub_339E64(v30);
  if ( v27 != v29 )
    sub_339E64(v27);
  return v15;
}
