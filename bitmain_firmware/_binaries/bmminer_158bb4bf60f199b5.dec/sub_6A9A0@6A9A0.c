int __fastcall sub_6A9A0(void (__fastcall **ptr)(_DWORD))
{
  char *v2; // r4
  char *v3; // r5
  char *v5; // r7
  int v6; // r0
  int v7; // r0
  int v8; // r8
  char *v9; // r0
  char *v10; // r0
  int v11; // [sp+0h] [bp-8h] BYREF
  int v12; // [sp+4h] [bp-4h] BYREF

  v3 = (char *)(ptr + 1);
  v2 = (char *)*ptr;
  while ( v2 != v3 )
  {
    if ( *(char **)v2 == v3 )
    {
      v5 = (char *)*((_DWORD *)v2 + 1);
      if ( v3 == v5 )
      {
        v6 = *((_DWORD *)v2 + 4);
        if ( ptr[7] )
        {
          sub_6AC04(v6, &v11);
          ptr[7](v11);
          v6 = *((_DWORD *)v2 + 4);
        }
        sub_6AC78(v6);
        v7 = *((_DWORD *)v2 + 5);
        if ( v7 )
        {
          if ( ptr[8] )
          {
            sub_6AC04(v7, &v12);
            ptr[8](v12);
            v7 = *((_DWORD *)v2 + 5);
          }
          sub_6AC78(v7);
        }
        v8 = *((_DWORD *)v2 + 2);
        if ( v8 )
        {
          if ( v5 == *(char **)v8 )
          {
            v9 = *(char **)(v8 + 4);
            v2 = (char *)*((_DWORD *)v2 + 2);
            if ( v5 != v9 )
            {
              free(v9);
              *(_DWORD *)(v8 + 4) = v5;
            }
          }
          else
          {
            free(*(void **)v8);
            v2 = (char *)v8;
            *(_DWORD *)v8 = v5;
          }
        }
        else
        {
          v10 = v2;
          v2 = v5;
          free(v10);
        }
      }
      else
      {
        v2 = (char *)*((_DWORD *)v2 + 1);
      }
    }
    else
    {
      v2 = *(char **)v2;
    }
  }
  free(ptr);
  return 0;
}
