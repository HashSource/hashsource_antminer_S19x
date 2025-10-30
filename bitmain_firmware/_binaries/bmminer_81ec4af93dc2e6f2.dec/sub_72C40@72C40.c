int __fastcall sub_72C40(_DWORD *a1, char *a2, int a3)
{
  size_t v3; // r0

  if ( a2 )
  {
    v3 = strlen(a2);
    if ( sub_72780((int)a2, v3) )
      return sub_72B80(a1, a2, a3);
  }
  sub_728D0(a3);
  return -1;
}
