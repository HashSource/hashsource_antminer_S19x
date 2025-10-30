int __fastcall sub_12B260(int a1, int a2, int *a3, int *a4)
{
  _DWORD v8[11]; // [sp+0h] [bp-58h] BYREF
  _DWORD v9[11]; // [sp+2Ch] [bp-2Ch] BYREF

  if ( sub_12B1F4(a3, v8) && sub_12B1F4(a4, v9) )
    return sub_16064C(a1, a2, v8, v9);
  else
    return 0;
}
