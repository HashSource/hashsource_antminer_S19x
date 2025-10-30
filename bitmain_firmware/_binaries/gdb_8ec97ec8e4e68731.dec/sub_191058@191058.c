int __fastcall sub_191058(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // [sp+4h] [bp-10h]
  int v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  v4 = a1;
  v5 = a2;
  v6 = a3;
  result = ((int (__fastcall *)(int, int, int))loc_190938)(a1, a2, a3);
  if ( result )
    return *(_DWORD *)(result + 12);
  return result;
}
