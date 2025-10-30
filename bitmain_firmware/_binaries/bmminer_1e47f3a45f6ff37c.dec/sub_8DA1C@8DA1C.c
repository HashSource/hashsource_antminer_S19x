int __fastcall sub_8DA1C(int a1, unsigned int a2)
{
  int *v3; // r0
  char *v6; // [sp+10h] [bp-14h]
  int v7; // [sp+14h] [bp-10h]
  unsigned int size; // [sp+18h] [bp-Ch]
  int v9; // [sp+1Ch] [bp-8h]

  v9 = 0;
  if ( *(_DWORD *)(a1 + 20) && *(_DWORD *)(a1 + 24) >= *(_DWORD *)(a1 + 20) )
  {
    sub_8CD10(
      2,
      "src/buf.c",
      169,
      "a_buf->size_real[%ld] >= a_buf->size_max[%ld]",
      *(_DWORD *)(a1 + 24),
      *(_DWORD *)(a1 + 20));
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) )
    {
      if ( *(_DWORD *)(a1 + 24) + a2 > *(_DWORD *)(a1 + 20) )
      {
        size = *(_DWORD *)(a1 + 20);
        v9 = 1;
      }
      else
      {
        size = *(_DWORD *)(a1 + 24) + a2;
      }
    }
    else
    {
      size = (unsigned int)((double)*(unsigned int *)(a1 + 24) + (double)a2 * 1.5);
    }
    v7 = *(_DWORD *)(a1 + 4) - *(_DWORD *)a1;
    v6 = (char *)realloc(*(void **)a1, size);
    if ( v6 )
    {
      *(_DWORD *)a1 = v6;
      *(_DWORD *)(a1 + 4) = &v6[v7];
      *(_DWORD *)(a1 + 24) = size;
      *(_DWORD *)(a1 + 12) = *(_DWORD *)a1 + size;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 12) - 1;
      return v9;
    }
    else
    {
      v3 = _errno_location();
      sub_8CD10(2, "src/buf.c", 189, "realloc fail, errno[%d]", *v3);
      free(*(void **)a1);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 12) = 0;
      return -1;
    }
  }
}
