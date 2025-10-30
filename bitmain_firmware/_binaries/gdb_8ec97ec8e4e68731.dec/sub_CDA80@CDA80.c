int __fastcall sub_CDA80(int result)
{
  int (*v1)(void); // r6
  int *v2; // r4
  int v3; // t1

  if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
  {
    v1 = (int (*)(void))result;
    result = *(_DWORD *)dword_478368;
    if ( *(_DWORD *)dword_478368 )
    {
      v2 = (int *)(dword_478368 + 4);
      do
      {
        result = v1();
        if ( (unsigned int)v2 >= dword_478368 + 4 * dword_47836C )
          break;
        v3 = *v2++;
        result = v3;
      }
      while ( v3 );
    }
  }
  return result;
}
