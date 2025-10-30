bool __fastcall sub_31D4F0(int a1, _DWORD *a2, void (__fastcall *a3)(_BYTE *), int a4)
{
  void (__fastcall *v6)(_BYTE *); // r3
  int v8; // [sp+0h] [bp-164h] BYREF
  _BYTE v9[256]; // [sp+4h] [bp-160h] BYREF
  int v10; // [sp+104h] [bp-60h]
  char v11; // [sp+108h] [bp-5Ch]
  void (__fastcall *v12)(_BYTE *); // [sp+10Ch] [bp-58h]
  int v13; // [sp+110h] [bp-54h]
  int v14; // [sp+114h] [bp-50h]
  int v15; // [sp+118h] [bp-4Ch]
  int v16; // [sp+11Ch] [bp-48h]
  int v17; // [sp+120h] [bp-44h]
  int v18; // [sp+124h] [bp-40h]
  int v19; // [sp+128h] [bp-3Ch]
  int v20; // [sp+12Ch] [bp-38h]
  int v21; // [sp+130h] [bp-34h]
  int *v22; // [sp+134h] [bp-30h]
  int v23; // [sp+138h] [bp-2Ch]
  int v24; // [sp+13Ch] [bp-28h] BYREF
  int *v25; // [sp+140h] [bp-24h]
  int v26; // [sp+144h] [bp-20h]
  _DWORD v27[2]; // [sp+148h] [bp-1Ch] BYREF

  v12 = a3;
  v13 = a4;
  v10 = 0;
  v11 = 0;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v20 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27[0] = 0;
  sub_3139C8((int)v27, &v24, a2);
  v27[1] = 0;
  v27[0] *= v24;
  v22 = &v8;
  v25 = &v8;
  sub_314740((unsigned int)v9, a1, (int)a2);
  v6 = v12;
  v9[v10] = 0;
  v6(v9);
  return v16 == 0;
}
