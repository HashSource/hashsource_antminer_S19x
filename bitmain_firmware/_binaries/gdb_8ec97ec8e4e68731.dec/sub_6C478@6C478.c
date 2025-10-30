int __fastcall sub_6C478(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r7
  int v8; // r8
  int v9; // r0
  __int64 v10; // r0
  __int64 v11; // kr00_8
  int v12; // r9
  int v13; // r0
  int v14; // r3
  _BYTE v15[12]; // [sp+8h] [bp-Ch] BYREF

  result = sub_1780B4(a3);
  if ( a1 )
  {
    v7 = *(_DWORD *)(result + 28);
    if ( sub_230020(a1, v15, *(_DWORD *)(v7 + 20)) )
    {
      return sub_946B0("Could not read the value of a SystemTap semaphore.");
    }
    else
    {
      v8 = *(_DWORD *)(v7 + 20);
      v9 = ((int (__fastcall *)(int))loc_165BB8)(a3);
      v10 = sub_15C250(v15, v8, v9);
      if ( a2 )
        v11 = v10 + 1;
      else
        v11 = v10 - 1;
      v12 = *(_DWORD *)(v7 + 20);
      v13 = ((int (__fastcall *)(int))loc_165BB8)(a3);
      sub_15C34C(v15, v12, v13, v14, v11, HIDWORD(v11));
      result = sub_230484(a1, v15, *(_DWORD *)(v7 + 20));
      if ( result )
        return sub_946B0("Could not write the value of a SystemTap semaphore.");
    }
  }
  return result;
}
