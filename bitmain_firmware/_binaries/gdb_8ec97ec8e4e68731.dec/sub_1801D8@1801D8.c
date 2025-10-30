void __fastcall sub_1801D8(const char *a1, int a2)
{
  _BYTE *v4; // r4
  void *v5; // r0
  _DWORD *v6; // r4
  int v7; // r0
  int *v8; // r0
  int v9; // r6
  unsigned int v10; // r5
  int *v11; // r7
  int v12; // r3
  _DWORD *v13; // r6
  int v14; // r8
  int v15; // r7
  _DWORD *v16; // r5
  __int64 v17; // r0
  int v18; // r2
  int v19; // r1
  int v20; // r3
  int v21; // [sp+8h] [bp-50h] BYREF
  void *ptr; // [sp+Ch] [bp-4Ch] BYREF
  int v23; // [sp+10h] [bp-48h] BYREF
  _DWORD v24[2]; // [sp+14h] [bp-44h] BYREF
  int v25[5]; // [sp+1Ch] [bp-3Ch] BYREF
  _DWORD s[10]; // [sp+30h] [bp-28h] BYREF

  if ( !sub_22EBBC(a1) )
    sub_946E0("The program is not being run.");
  sub_17E868();
  sub_17E884();
  sub_17E8C4();
  sub_17EBD4(&ptr, a1, &v21);
  v4 = ptr;
  sub_180104((int)&dword_4899A0, v21);
  if ( v4 )
  {
    sub_DB7B4(v4, a2, 0);
    goto LABEL_4;
  }
  v5 = memset(s, 0, sizeof(s));
  v6 = (_DWORD *)((int (__fastcall *)(void *))loc_23DBE4)(v5);
  v23 = v6[5];
  v7 = sub_187D70(0);
  v8 = sub_17F074(v7);
  v9 = sub_15F70C((int)v8);
  v10 = sub_15DDFC(v9);
  v11 = sub_C3460(v10);
  if ( !v11 )
  {
    sub_1B240C(v24, v10);
    if ( v24[0] )
    {
      v18 = *(__int16 *)(v24[0] + 22);
      v19 = *(_DWORD *)(v24[0] + 8);
      if ( v18 != -1 )
      {
        v20 = *(_DWORD *)(*(_DWORD *)(v24[1] + 144) + 4 * v18);
        v6[16] = v10 + 1;
        v6[15] = v20 + v19;
        goto LABEL_9;
      }
      v17 = sub_94700((int)"infcmd.c", 1550, "Section index is uninitialized");
    }
    sub_946E0("Execution is not within a known function.", HIDWORD(v17));
  }
  sub_21DEAC(s, v10);
  v12 = *(_DWORD *)v11[2];
  v6[16] = s[6];
  v6[15] = v12;
LABEL_9:
  v6[18] = 1;
  v6[32] = 1;
  ((void (__fastcall *)(int *, int))loc_15CFA0)(v25, v9);
  sub_D8B08((int)v6, v25[0], v25[1], v25[2], v25[3], v25[4]);
  v13 = sub_9253C((int)sub_17E8EC, (int)&v23);
  v14 = sub_191770(v13);
  v15 = v6[5];
  v16 = sub_93094(1u, 0x10u);
  sub_2421FC(v16, &unk_46D53C, v14);
  v16[3] = v15;
  v6[51] = v16;
  sub_92640(v13);
  sub_18BAD4(-1, 144);
LABEL_4:
  if ( ptr )
    free(ptr);
}
