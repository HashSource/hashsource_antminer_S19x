int __fastcall sub_183A88(int a1, int a2, int a3)
{
  int v3; // r2
  int result; // r0
  int v5; // r0
  _DWORD v6[4]; // [sp+4h] [bp-10h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  v6[2] = a3;
  v3 = ps_getpid_0((int)v6);
  if ( v3 )
  {
    for ( result = dword_487918; result; result = *(_DWORD *)(result + 4) )
    {
      if ( v3 == *(_DWORD *)(result + 12) )
        break;
    }
  }
  else
  {
    v5 = sub_15F58();
    return sub_183AE4(v5);
  }
  return result;
}
