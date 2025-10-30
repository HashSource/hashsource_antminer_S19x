int __fastcall sub_70788(void (__fastcall **ptr)(_DWORD))
{
  char *v2; // r4
  char *v3; // r5
  char *v5; // r7
  int v6; // r0
  int v7; // r8
  char *v8; // r0
  int v9; // [sp+0h] [bp-8h] BYREF
  int v10; // [sp+4h] [bp-4h] BYREF

  v3 = (char *)(ptr + 1);
  v2 = (char *)*ptr;
  while ( v2 != v3 )
  {
    if ( v3 == *(char **)v2 )
    {
      v5 = (char *)*((_DWORD *)v2 + 1);
      if ( v3 == v5 )
      {
        if ( ptr[7] )
        {
          sub_708F0(*((_DWORD *)v2 + 4), &v9);
          ptr[7](v9);
        }
        sub_70938(*((_DWORD *)v2 + 4));
        v6 = *((_DWORD *)v2 + 5);
        if ( v6 )
        {
          if ( ptr[8] )
          {
            sub_708F0(v6, &v10);
            ptr[8](v10);
            v6 = *((_DWORD *)v2 + 5);
          }
          sub_70938(v6);
        }
        v7 = *((_DWORD *)v2 + 2);
        if ( v7 )
        {
          if ( v5 != *(char **)v7 )
          {
            free(*(void **)v7);
            *(_DWORD *)v7 = v5;
            goto LABEL_18;
          }
          v8 = *(char **)(v7 + 4);
          if ( v5 == v8 )
          {
LABEL_18:
            v2 = (char *)v7;
          }
          else
          {
            free(v8);
            v2 = (char *)v7;
            *(_DWORD *)(v7 + 4) = v5;
          }
        }
        else
        {
          free(v2);
          v2 = v5;
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
