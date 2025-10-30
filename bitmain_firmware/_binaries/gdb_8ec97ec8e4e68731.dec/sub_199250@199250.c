int __fastcall sub_199250(_DWORD *a1)
{
  int v1; // r0
  int v3; // r0

  if ( *(_DWORD *)(dword_487D2C + 24) )
  {
    v3 = sub_92F64(2, "cannot evaluate expressions while program space is in startup");
    return sub_199294(v3);
  }
  else
  {
    ++*a1;
    v1 = sub_14CCCC((int)a1);
    return sub_26EBA8(v1);
  }
}
