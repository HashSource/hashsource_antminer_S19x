int __fastcall sub_5AE34(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r3
  int result; // r0
  int v7; // r3
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r2
  unsigned __int8 *v10; // r3
  int v11; // r2
  int v12; // r3
  bool v13; // zf
  unsigned __int8 *v14; // r3

  v4 = *(unsigned __int8 *)(a1 + 20);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v5 = *(_DWORD *)(a1 + 12);
    result = *(_DWORD *)(a1 + 8) + 1;
    *(_DWORD *)(a1 + 8) = result;
    if ( result == v5 )
    {
      v10 = *(unsigned __int8 **)(a1 + 16);
      *(_BYTE *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 4) = v10;
      v7 = *v10;
    }
    else
    {
      v7 = **(unsigned __int8 **)(a1 + 4);
    }
  }
  else
  {
    v8 = (unsigned __int8 *)**(unsigned __int8 **)(a1 + 4);
    if ( v8 == (unsigned __int8 *)45 )
      sub_946E0("negative value");
    result = sub_5AB7C((unsigned __int8 **)(a1 + 4), 45, a3, v8);
    v9 = *(unsigned __int8 **)(a1 + 4);
    *(_DWORD *)(a1 + 8) = result;
    v7 = *v9;
    if ( v7 == 45 )
    {
      *(_DWORD *)(a1 + 16) = sub_9360C(v9 + 1);
      v12 = sub_5AB7C((unsigned __int8 **)(a1 + 16), v4, v11, (unsigned __int8 *)(a1 + 16));
      result = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 12) = v12;
      v13 = result == v12;
      if ( result > v12 )
        sub_946E0("inverted range");
      if ( result == v12 )
      {
        v14 = *(unsigned __int8 **)(a1 + 16);
      }
      else
      {
        v14 = *(unsigned __int8 **)(a1 + 4);
        *(_BYTE *)(a1 + 20) = 1;
      }
      if ( v13 )
        *(_DWORD *)(a1 + 4) = v14;
      v7 = *v14;
    }
  }
  *(_BYTE *)a1 = v7 == 0;
  return result;
}
