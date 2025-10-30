void __fastcall sub_8C870(int (__fastcall **a1)(const void *), const void *a2)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  _DWORD *ptr; // [sp+1Ch] [bp-8h]

  if ( a1 && a2 )
  {
    v2 = a1[3](a2);
    sub_8F7E4(v2, a1[2]);
    for ( ptr = (_DWORD *)*((_DWORD *)a1[1] + v3);
          ptr && !((int (__fastcall *)(const void *, _DWORD))a1[4])(a2, ptr[1]);
          ptr = (_DWORD *)ptr[4] )
    {
      ;
    }
    if ( ptr )
    {
      if ( a1[5] )
        a1[5]((const void *)ptr[1]);
      if ( a1[6] )
        a1[6]((const void *)ptr[2]);
      if ( ptr[4] )
        *(_DWORD *)(ptr[4] + 12) = ptr[3];
      if ( ptr[3] )
      {
        *(_DWORD *)(ptr[3] + 16) = ptr[4];
      }
      else
      {
        sub_8F7E4(*ptr, a1[2]);
        *((_DWORD *)a1[1] + v4) = ptr[4];
      }
      free(ptr);
      *a1 = (int (__fastcall *)(const void *))((char *)*a1 - 1);
    }
    else
    {
      sub_8CD10(2, "src/zc_hashtable.c", 251, "p[%p] not found in hashtable", 0);
    }
  }
  else
  {
    sub_8CD10(2, "src/zc_hashtable.c", 240, "a_table[%p] or a_key[%p] is NULL, just do nothing", a1, a2);
  }
}
