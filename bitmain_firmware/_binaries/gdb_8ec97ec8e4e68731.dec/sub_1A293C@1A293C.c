int __fastcall sub_1A293C(const char *a1, int a2, int a3)
{
  _DWORD *v6; // r5
  _DWORD v8[3]; // [sp+8h] [bp-34h] BYREF
  char v9; // [sp+14h] [bp-28h]
  int v10; // [sp+18h] [bp-24h]
  _DWORD v11[3]; // [sp+20h] [bp-1Ch] BYREF
  char v12; // [sp+2Ch] [bp-10h]
  int v13; // [sp+30h] [bp-Ch]

  v8[1] = strlen(a1);
  v8[0] = a1;
  v9 = 1;
  v10 = -1;
  v8[2] = 0;
  memset(v11, 0, sizeof(v11));
  v12 = 0;
  v13 = 0;
  v6 = sub_9253C((int)sub_1A0FC0, (int)v11);
  ((void (__fastcall *)(_DWORD *, _DWORD *, _DWORD, int, int))loc_1A26F4)(v11, v8, 0, a2, a3);
  sub_1A1660((int)v11, 0);
  sub_92640(v6);
  return v11[0];
}
