int __fastcall sub_DA08C(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r4
  int v9; // r1
  int v10; // r2
  int result; // r0
  _DWORD *v12; // [sp+Ch] [bp-4h] BYREF

  v8 = sub_9836C(0x94u);
  memset(v8, 0, 0x94u);
  v8[4] = 1;
  *((_BYTE *)v8 + 32) = 0;
  *((_BYTE *)v8 + 33) = 0;
  v8[13] = 0;
  v8[14] = 0;
  v8[15] = 0;
  v8[16] = 0;
  v8[17] = 0;
  v8[28] = -1;
  *v8 = off_37D918;
  sub_D0244((int)v8, a1, a2, a3, a4);
  v9 = dword_47584C;
  v10 = dword_475850;
  v12 = v8;
  v8[34] = dword_475848;
  v8[35] = v9;
  v8[36] = v10;
  sub_D9044(0, (int *)&v12, 1);
  result = (int)v12;
  if ( v12 )
    return (*(int (__fastcall **)(_DWORD *))(*v12 + 4))(v12);
  return result;
}
