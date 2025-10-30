int __fastcall sub_27A7A4(int a1, int a2, __int64 a3)
{
  int result; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r12
  int v7; // r1
  __int64 v8; // r2
  _DWORD v9[2]; // [sp+0h] [bp-14h] BYREF
  __int64 v10; // [sp+8h] [bp-Ch]

  v9[0] = a2;
  v10 = a3;
  result = sub_324030(a1, v9, 1);
  if ( *(_DWORD *)result )
  {
    if ( a3 != *(_QWORD *)(*(_DWORD *)result + 8) )
      sub_946E0("Unexpected type id from GCC, check you use recent enough GCC.");
  }
  else
  {
    v5 = (_DWORD *)result;
    v6 = sub_93028(0x10u);
    result = v9[0];
    v7 = v9[1];
    v8 = v10;
    *v6 = v9[0];
    v6[1] = v7;
    *((_QWORD *)v6 + 1) = v8;
    *v5 = v6;
  }
  return result;
}
