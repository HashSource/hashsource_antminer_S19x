int __fastcall sub_F004C(int a1, int a2, int a3)
{
  int v6; // r0
  _BYTE v8[4]; // [sp+4h] [bp-28h] BYREF
  _BYTE v9[4]; // [sp+8h] [bp-24h] BYREF
  int (*v10)(); // [sp+Ch] [bp-20h]
  int (__fastcall *v11)(int, int); // [sp+10h] [bp-1Ch]
  int (__fastcall *v12)(int, char *); // [sp+14h] [bp-18h]
  int (*v13)(); // [sp+18h] [bp-14h]
  int (*v14)(); // [sp+1Ch] [bp-10h]
  int (*v15)(); // [sp+20h] [bp-Ch]
  int (*v16)(); // [sp+24h] [bp-8h]

  sub_293E4C(v8, v9);
  v10 = sub_EFCF8;
  v11 = sub_EFCE4;
  v12 = sub_EFCD0;
  v13 = sub_EFCC0;
  v15 = sub_EFCB8;
  v16 = sub_EFCB4;
  v14 = sub_EFCBC;
  v6 = ((int (__fastcall *)(int, int, int, _BYTE *))loc_F5EA0)(a1, a2, a3, v8);
  return sub_28CC28(v6);
}
