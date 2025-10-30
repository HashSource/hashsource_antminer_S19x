int __fastcall sub_24A6FC(int a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v7; // r0
  int *v8; // r0
  int result; // r0
  int *v10; // r0
  _DWORD v11[5]; // [sp+4h] [bp-20h] BYREF
  int v12; // [sp+18h] [bp-Ch]
  int v13; // [sp+1Ch] [bp-8h]

  v11[0] = a1;
  v12 = 0;
  v11[2] = a3;
  v11[1] = a2;
  v11[3] = a4;
  v11[4] = a5;
  v13 = a7;
  if ( a6 == 76 )
  {
    v10 = sub_C2574(a3);
    if ( v10 )
    {
      result = sub_20F1B4((int)v10, (void (__fastcall *)(int, int, int))sub_24ECB0, (int)v11);
      if ( !v12 )
        return sub_946B0("No locals found in scope.");
    }
    else
    {
      return sub_946B0("Can't collect locals; no symbol table info available.\n");
    }
  }
  else
  {
    v7 = sub_C3368(a3);
    v8 = sub_C2574(v7);
    if ( v8 )
    {
      result = sub_20F1F4(v8, (void (__fastcall *)(int, int, int))sub_24ECB0, (int)v11);
      if ( !v12 )
        return sub_946B0("No args found in scope.");
    }
    else
    {
      return sub_946B0("Can't collect args; no symbol table info available.");
    }
  }
  return result;
}
