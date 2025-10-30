int __fastcall sub_D8F14(int a1, int a2, int a3, int a4)
{
  _DWORD v9[3]; // [sp+38h] [bp-2Ch] BYREF
  int v10; // [sp+44h] [bp-20h]
  int v11; // [sp+48h] [bp-1Ch]
  int v12; // [sp+4Ch] [bp-18h]
  int v13; // [sp+50h] [bp-14h]
  int v14; // [sp+54h] [bp-10h]
  int v15; // [sp+58h] [bp-Ch]
  int v16; // [sp+5Ch] [bp-8h]

  sub_21DEAC(v9, a3);
  v12 = a3;
  v10 = sub_214838(a3);
  LOBYTE(v14) = 1;
  ((void (__fastcall *)(int, int, _DWORD, _DWORD, _DWORD, int, int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))loc_D8E08)(
    a1,
    a2,
    v9[0],
    v9[1],
    v9[2],
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    0,
    0,
    0,
    0,
    0,
    a4);
  return a1;
}
