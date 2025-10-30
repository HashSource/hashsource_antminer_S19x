int __fastcall sub_1CA6D4(int a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r4
  int v7; // [sp+0h] [bp-8h] BYREF

  v4 = sub_15DDFC(a1);
  sub_1CA3F8(&v7, v4);
  v5 = v7;
  if ( v7 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 12))(v7, a1) > a2 )
    return (*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)v5 + 20))(v5, a2, a1);
  else
    return 0;
}
