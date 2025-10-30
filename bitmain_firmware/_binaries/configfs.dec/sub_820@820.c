__int64 __fastcall sub_820(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // x19
  __int64 v8; // x21
  __int64 v9; // x23
  unsigned __int64 v10; // x1
  unsigned __int64 v11; // x0
  unsigned __int64 v12; // x1
  bool v13; // cc
  char *v14; // x0
  char *v15; // x23
  const void *v16; // x1
  char *v17; // x0
  __int64 v18; // x19

  v7 = *(_QWORD *)(a1 + 256);
  v8 = v7 + 32;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 144LL) + 56LL);
  mutex_lock(v7 + 32);
  if ( *(_BYTE *)(v7 + 100) )
  {
    v18 = -26;
  }
  else
  {
    *(_BYTE *)(v7 + 101) = 1;
    v10 = *(int *)(v7 + 112);
    v11 = a3 + *a4;
    if ( v11 <= v10 )
    {
      v17 = *(char **)(v7 + 104);
    }
    else
    {
      v12 = *(_QWORD *)(v9 + 48);
      if ( v12 )
        v13 = v11 > v12;
      else
        v13 = 0;
      if ( v13 )
      {
        v18 = -27;
        goto LABEL_12;
      }
      v14 = (char *)vmalloc(v11);
      v15 = v14;
      if ( !v14 )
      {
        v18 = -12;
        goto LABEL_12;
      }
      v16 = *(const void **)(v7 + 104);
      if ( v16 )
      {
        memcpy(v14, v16, *(int *)(v7 + 112));
        vfree(*(_QWORD *)(v7 + 104));
      }
      memset(&v15[*(int *)(v7 + 112)], 0, a3 + *a4 - *(int *)(v7 + 112));
      *(_QWORD *)(v7 + 104) = v15;
      v17 = v15;
      LODWORD(v10) = *a4 + a3;
      *(_DWORD *)(v7 + 112) = v10;
      v10 = (int)v10;
    }
    v18 = simple_write_to_buffer(v17, v10, a4, a2, a3);
  }
LABEL_12:
  mutex_unlock(v8);
  return v18;
}
