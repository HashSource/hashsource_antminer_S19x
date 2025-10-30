int __fastcall sub_7654(int result)
{
  int v1; // r4
  void *v2; // r0
  int v3; // r8
  int v4; // r7
  _DWORD *v5; // r9
  _DWORD **v6; // r1
  _DWORD *v7; // r3
  int v8; // r1

  v1 = result;
  if ( result )
  {
    if ( *(_DWORD *)(result + 24) == cache_keyid )
      sub_7454();
    sub_75F8(*(_DWORD **)(v1 + 16));
    v2 = *(void **)(v1 + 12);
    v3 = key_hash;
    v4 = (unsigned __int16)authhashmask & *(_DWORD *)(v1 + 24);
    v5 = (_DWORD *)(key_hash + 4 * v4);
    if ( v2 )
    {
      memset(v2, 0, *(_DWORD *)(v1 + 32));
      free(*(void **)(v1 + 12));
    }
    v6 = *(_DWORD ***)(v3 + 4 * v4);
    if ( (_DWORD **)v1 != v6 )
    {
      if ( !v6 )
        goto LABEL_15;
      v7 = *v6;
      if ( !*v6 )
        goto LABEL_15;
      while ( (_DWORD *)v1 != v7 )
      {
        v6 = (_DWORD **)v7;
        if ( !*v7 )
          goto LABEL_15;
        v7 = (_DWORD *)*v7;
      }
      v5 = v6;
      v6 = (_DWORD **)v1;
    }
    *v5 = *v6;
LABEL_15:
    result = *(_DWORD *)(v1 + 4);
    *(_DWORD *)(result + 8) = *(_DWORD *)(v1 + 8);
    *(_DWORD *)(*(_DWORD *)(v1 + 8) + 4) = result;
    *(_DWORD *)(v1 + 12) = 0;
    *(_DWORD *)(v1 + 16) = 0;
    *(_DWORD *)(v1 + 20) = 0;
    *(_DWORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 28) = 0;
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 36) = 0;
    v8 = authfreekeys;
    authfreekeys = v1;
    *(_DWORD *)(v1 + 8) = v8;
    --authnumkeys;
    ++authnumfreekeys;
  }
  return result;
}
