int __fastcall sub_3E3AC(int a1, int a2)
{
  int (*v4)(void); // r3
  void (__fastcall *v5)(int, _DWORD); // r7
  unsigned __int8 v6; // r0
  void (__fastcall *v7)(int, _DWORD); // r7
  unsigned __int8 v8; // r0
  void (__fastcall *v9)(int, _DWORD *, int *); // r3
  void (__fastcall *v10)(int, __int16 *, int *); // r3
  void (__fastcall *v11)(int, _DWORD); // r9
  unsigned __int8 v12; // r0
  void (__fastcall *v13)(int, _DWORD); // r9
  unsigned __int16 v14; // r0
  void (__fastcall *v15)(int, _DWORD); // r9
  unsigned __int16 v16; // r0
  void (__fastcall *v17)(int, _DWORD); // r9
  unsigned __int8 v18; // r0
  void (__fastcall *v19)(int, _DWORD); // r9
  unsigned __int8 v20; // r0
  void (__fastcall *v21)(int, _DWORD); // r9
  unsigned __int8 v22; // r0
  void (__fastcall *v23)(int, _DWORD); // r9
  unsigned __int8 v24; // r0
  void (__fastcall *v25)(int, _DWORD); // r6
  unsigned __int16 v26; // r0
  void (__fastcall *v27)(int, _DWORD); // r6
  unsigned __int16 v28; // r0
  void (__fastcall *v29)(int, _DWORD); // r6
  unsigned __int16 v30; // r0
  void (__fastcall *v31)(int, _DWORD); // r6
  char v32; // r0
  void (__fastcall *v33)(int, _DWORD); // r6
  char v34; // r0
  void (__fastcall *v35)(int, _DWORD); // r6
  unsigned __int8 v36; // r0
  int (__fastcall *v37)(int); // r3
  int v38; // r0
  int (__fastcall *v39)(int, _DWORD); // r5
  unsigned __int8 v40; // r0
  __int16 v42; // [sp+0h] [bp-A4h] BYREF
  int v43; // [sp+4h] [bp-A0h] BYREF
  _DWORD v44[4]; // [sp+8h] [bp-9Ch] BYREF
  _DWORD v45[4]; // [sp+18h] [bp-8Ch] BYREF
  _DWORD v46[4]; // [sp+28h] [bp-7Ch] BYREF
  _BYTE s[32]; // [sp+38h] [bp-6Ch] BYREF
  _BYTE v48[32]; // [sp+58h] [bp-4Ch] BYREF
  _BYTE v49[40]; // [sp+78h] [bp-2Ch] BYREF

  v4 = *(int (**)(void))(a1 + 28);
  v43 = 0;
  v5 = *(void (__fastcall **)(int, _DWORD))(a2 + 32);
  v6 = v4();
  v5(a2, v6);
  v7 = *(void (__fastcall **)(int, _DWORD))(a2 + 40);
  v8 = (*(int (__fastcall **)(int))(a1 + 36))(a1);
  v7(a2, v8);
  memset(s, 0, sizeof(s));
  v43 = 32;
  (*(void (__fastcall **)(int, _BYTE *, int *))(a1 + 44))(a1, s, &v43);
  (*(void (__fastcall **)(int, _BYTE *, int *))(a2 + 48))(a2, s, &v43);
  memset(v44, 0, sizeof(v44));
  v9 = *(void (__fastcall **)(int, _DWORD *, int *))(a1 + 52);
  v43 = 16;
  v9(a1, v44, &v43);
  (*(void (__fastcall **)(int, _DWORD *, int *))(a2 + 56))(a2, v44, &v43);
  v43 = 16;
  memset(v45, 0, sizeof(v45));
  (*(void (__fastcall **)(int, _DWORD *, int *))(a1 + 60))(a1, v45, &v43);
  (*(void (__fastcall **)(int, _DWORD *, int *))(a2 + 64))(a2, v45, &v43);
  v43 = 16;
  memset(v46, 0, sizeof(v46));
  (*(void (__fastcall **)(int, _DWORD *, int *))(a1 + 68))(a1, v46, &v43);
  (*(void (__fastcall **)(int, _DWORD *, int *))(a2 + 72))(a2, v46, &v43);
  v42 = 0;
  v10 = *(void (__fastcall **)(int, __int16 *, int *))(a1 + 76);
  v43 = 2;
  v10(a1, &v42, &v43);
  (*(void (__fastcall **)(int, __int16 *, int *))(a2 + 80))(a2, &v42, &v43);
  v11 = *(void (__fastcall **)(int, _DWORD))(a2 + 88);
  v12 = (*(int (__fastcall **)(int))(a1 + 84))(a1);
  v11(a2, v12);
  (*(void (__fastcall **)(int, _DWORD))(a2 + 96))(a2, 0);
  (*(void (__fastcall **)(int, _DWORD))(a2 + 112))(a2, 0);
  v13 = *(void (__fastcall **)(int, _DWORD))(a2 + 128);
  v14 = (*(int (__fastcall **)(int))(a1 + 124))(a1);
  v13(a2, v14);
  v15 = *(void (__fastcall **)(int, _DWORD))(a2 + 136);
  v16 = (*(int (__fastcall **)(int))(a1 + 132))(a1);
  v15(a2, v16);
  v17 = *(void (__fastcall **)(int, _DWORD))(a2 + 144);
  v18 = (*(int (__fastcall **)(int))(a1 + 140))(a1);
  v17(a2, v18);
  v19 = *(void (__fastcall **)(int, _DWORD))(a2 + 152);
  v20 = (*(int (__fastcall **)(int))(a1 + 148))(a1);
  v19(a2, v20);
  v21 = *(void (__fastcall **)(int, _DWORD))(a2 + 160);
  v22 = (*(int (__fastcall **)(int))(a1 + 156))(a1);
  v21(a2, v22);
  v23 = *(void (__fastcall **)(int, _DWORD))(a2 + 168);
  v24 = (*(int (__fastcall **)(int))(a1 + 164))(a1);
  v23(a2, v24);
  v43 = 40;
  memset(v49, 0, sizeof(v49));
  (*(void (__fastcall **)(int, _BYTE *, int *))(a1 + 172))(a1, v49, &v43);
  (*(void (__fastcall **)(int, _BYTE *, int *))(a2 + 176))(a2, v49, &v43);
  v43 = 32;
  memset(v48, 0, sizeof(v48));
  (*(void (__fastcall **)(int, _BYTE *, int *))(a1 + 180))(a1, v48, &v43);
  (*(void (__fastcall **)(int, _BYTE *, int *))(a2 + 184))(a2, v48, &v43);
  v25 = *(void (__fastcall **)(int, _DWORD))(a2 + 192);
  v26 = (*(int (__fastcall **)(int))(a1 + 188))(a1);
  v25(a2, v26);
  v27 = *(void (__fastcall **)(int, _DWORD))(a2 + 200);
  v28 = (*(int (__fastcall **)(int))(a1 + 196))(a1);
  v27(a2, v28);
  v29 = *(void (__fastcall **)(int, _DWORD))(a2 + 208);
  v30 = (*(int (__fastcall **)(int))(a1 + 204))(a1);
  v29(a2, v30);
  v31 = *(void (__fastcall **)(int, _DWORD))(a2 + 216);
  v32 = (*(int (__fastcall **)(int))(a1 + 212))(a1);
  v31(a2, v32);
  v33 = *(void (__fastcall **)(int, _DWORD))(a2 + 224);
  v34 = (*(int (__fastcall **)(int))(a1 + 220))(a1);
  v33(a2, v34);
  v35 = *(void (__fastcall **)(int, _DWORD))(a2 + 232);
  v36 = (*(int (__fastcall **)(int))(a1 + 228))(a1);
  v35(a2, v36);
  v37 = *(int (__fastcall **)(int))(a1 + 236);
  v38 = a1;
  v39 = *(int (__fastcall **)(int, _DWORD))(a2 + 240);
  v40 = v37(v38);
  return v39(a2, v40);
}
