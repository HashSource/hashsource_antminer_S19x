int __fastcall sub_245BE4(int a1)
{
  int v2; // r5
  int v3; // r4
  int v4; // r0
  _DWORD *v5; // r7
  bool v6; // cc
  int v7; // r1
  int result; // r0
  _DWORD *v9; // r3

  v2 = sub_1DD58C(a1);
  v3 = 0;
  v4 = sub_24B5AC();
  v5 = sub_D1908(v4);
  while ( 1 )
  {
    v6 = v3 < ((int (__fastcall *)(int))loc_166E9C)(v2);
    v7 = v3;
    result = a1;
    if ( !v6 )
      break;
    ++v3;
    ((void (__fastcall *)(int, int, _DWORD))loc_1DE9C8)(a1, v7, 0);
  }
  if ( v5 )
  {
    v9 = (_DWORD *)v5[7];
    if ( v9 )
    {
      if ( *v9 )
      {
        return sub_946B0("Tracepoint %d has multiple locations, cannot infer $pc", v5[6]);
      }
      else
      {
        if ( (int)v5[34] <= 0 )
          JUMPOUT(0x16DAF0);
        return sub_946B0("Tracepoint %d does while-stepping, cannot infer $pc", v5[6]);
      }
    }
  }
  return result;
}
