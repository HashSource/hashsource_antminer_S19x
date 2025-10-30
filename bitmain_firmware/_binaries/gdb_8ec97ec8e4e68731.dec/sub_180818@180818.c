void __fastcall sub_180818(const char *a1, int a2)
{
  void *v4; // r4
  int v5; // r0
  int v6; // r4
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r8
  _DWORD *v10; // r5
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r0
  int *v14; // r0
  int v15; // r3
  int v16; // r0
  void *v17; // r0
  _DWORD *v18; // r4
  int v19; // r0
  int v20; // r6
  int v21; // r5
  int v22; // r4
  int v23; // r7
  int v24; // r0
  int v25; // r0
  int v26; // r9
  void *v27; // r0
  int v28; // r8
  int v29; // r0
  int v30; // r0
  int v31; // r1
  int v32; // r0
  int v33; // r0
  const char *v34; // r1
  int v35; // [sp+38h] [bp-D8h] BYREF
  void *ptr; // [sp+3Ch] [bp-D4h] BYREF
  int v37; // [sp+40h] [bp-D0h] BYREF
  int v38; // [sp+44h] [bp-CCh] BYREF
  int v39[5]; // [sp+48h] [bp-C8h] BYREF
  _DWORD v40[15]; // [sp+5Ch] [bp-B4h] BYREF
  _DWORD s[20]; // [sp+98h] [bp-78h] BYREF
  _DWORD v42[10]; // [sp+E8h] [bp-28h] BYREF

  if ( !sub_22EBBC(a1) )
    sub_946E0("The program is not being run.");
  sub_17E868();
  sub_17E884();
  sub_17E8C4();
  sub_17EBD4(&ptr, a1, &v35);
  v4 = ptr;
  sub_180104((int)&dword_4899A0, v35);
  if ( v4 )
    sub_946E0("The \"finish\" command does not take any arguments.");
  v5 = sub_15F7E8((_BOOL4)"No selected frame.");
  v6 = ((int (__fastcall *)(int))loc_15FA88)(v5);
  if ( !v6 )
    sub_946E0("\"finish\" not meaningful in the outermost frame.");
  v7 = sub_187D70(0);
  v8 = (_DWORD *)((int (__fastcall *)(int))loc_23DBE4)(v7);
  v9 = sub_191770(v8);
  v10 = sub_93094(1u, 0x20u);
  sub_2421FC(v10, &unk_46D56C, v9);
  v8[51] = v10;
  v11 = sub_15F7E8((_BOOL4)"No selected frame.");
  if ( sub_15DA8C(v11) == 2 )
  {
    memset(&v40[5], 0, 0x28u);
    sub_188198(v6, v40[5], v40[6], v40[7], v40[8], v40[9], v40[10], v40[11], v40[12], v40[13], v40[14]);
    v32 = sub_15DDFC(v6);
    v8[15] = v32;
    v8[16] = v32;
    v8[32] = 1;
    if ( !a2 )
      goto LABEL_15;
    sub_259F10("Run till exit from ");
    v33 = sub_15F7E8(0);
    sub_20E7E8(v33, 1, 0);
    sub_18BAD4(-1, 144);
  }
  else
  {
    v12 = sub_15F7E8(0);
    v13 = sub_15DDFC(v12);
    v14 = sub_C3460(v13);
    v10[4] = v14;
    v15 = dword_48794C;
    if ( a2 )
    {
      if ( dword_48794C == 1 )
      {
        sub_259F10("Run back to call of ");
      }
      else
      {
        if ( v14 && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v14[6] + 24) + 28) + 1) & 1) != 0 )
        {
          v34 = (const char *)(dword_46D448 ? sub_21B3C4(v14) : *v14);
          if ( !sub_25A3E4("warning: Function %s does not return normally.\nTry to finish anyway? ", v34) )
            sub_946E0("Not confirmed.");
        }
        sub_259F10("Run till exit from ");
      }
      v16 = sub_15F7E8(0);
      sub_20E7E8(v16, 1, 0);
      v15 = dword_48794C;
    }
    if ( v15 == 1 )
    {
      v17 = memset(s, 0, 0x28u);
      v18 = (_DWORD *)((int (__fastcall *)(void *))loc_23DBE4)(v17);
      v19 = sub_15F70C((int)v18);
      v20 = sub_15DDFC(v19);
      if ( !sub_C37B8(v20, 0, &v37, 0) )
        sub_946E0("Cannot find bounds of current function");
      sub_21DEAC(s, v37);
      v21 = s[5];
      v18[30] = 1;
      if ( v20 != v21 )
      {
        v22 = sub_15F7E8(0);
        v23 = sub_15ECB4(v22);
        memset(&s[10], 0, 0x28u);
        s[15] = v21;
        s[10] = sub_15DABC(v22);
        sub_1882D0(v23, s[10], s[11], s[12], s[13], s[14], s[15], s[16], s[17], s[18], s[19], 0, 0, 0, 0, 0);
LABEL_15:
        sub_18BAD4(-1, 144);
        goto LABEL_22;
      }
      v18[16] = 1;
      v18[15] = 1;
      sub_18BAD4(-1, 144);
    }
    else
    {
      while ( 1 )
      {
        v25 = sub_15FDF4(v6);
        if ( !v25 || (v24 = sub_15FE50(v25)) == 0 )
          sub_946E0("Cannot find the caller frame.");
        if ( v6 == v24 )
          break;
        v6 = v24;
      }
      ((void (__fastcall *)(int *, int))loc_15CFA0)(v39, v6);
      v26 = sub_15ECB4(v6);
      v27 = memset(v42, 0, sizeof(v42));
      v28 = ((int (__fastcall *)(void *))loc_23DBE4)(v27);
      v29 = sub_15DDFC(v6);
      sub_21DEAC(v42, v29);
      v42[5] = sub_15DDFC(v6);
      sub_15F9BC((int)v40, v6);
      ((void (__fastcall *)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))loc_D8E08)(
        &v38,
        v26,
        v42[0],
        v42[1],
        v42[2],
        v42[3],
        v42[4],
        v42[5],
        v42[6],
        v42[7],
        v42[8],
        v42[9],
        v40[0],
        v40[1],
        v40[2],
        v40[3],
        v40[4],
        5);
      v30 = v39[3];
      v31 = v39[4];
      v10[3] = v38;
      sub_D8B08(v28, v39[0], v39[1], v39[2], v30, v31);
      *(_DWORD *)(v28 + 120) = 1;
      sub_18BAD4(-1, 144);
    }
  }
LABEL_22:
  if ( ptr )
    free(ptr);
}
