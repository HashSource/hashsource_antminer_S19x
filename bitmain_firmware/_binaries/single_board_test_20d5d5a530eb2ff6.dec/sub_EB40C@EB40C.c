int __fastcall sub_EB40C(_DWORD *a1, int a2, int a3)
{
  int v4; // r1
  _DWORD **v5; // r3
  int result; // r0
  _BYTE *v7; // [sp+8h] [bp-14h] BYREF
  _BYTE v8[4]; // [sp+Ch] [bp-10h] BYREF
  int v9; // [sp+10h] [bp-Ch]
  int v10; // [sp+14h] [bp-8h]

  v9 = a2;
  v10 = a3;
  v7 = v8;
  if ( dword_6E1AB0 && (v4 = sub_10BC4C(dword_6E1AB0, v8), v4 >= 0) )
  {
    v7 = (_BYTE *)sub_10C01C(dword_6E1AB0, v4);
    v5 = (_DWORD **)&v7;
  }
  else
  {
    result = sub_EAC70((int)&v7, (int)&off_20E8B8, 43, 4, (int (__fastcall *)(int, int))sub_EB360);
    v5 = (_DWORD **)result;
    if ( !result )
      return result;
  }
  result = 1;
  if ( a1 )
    *a1 = **v5;
  return result;
}
