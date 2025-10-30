int __fastcall sub_9D6C0(int result, int a2, int a3)
{
  struct obstack *v3; // r9
  int v5; // r7
  unsigned int v6; // r6
  unsigned int v7; // r5
  int v8; // r4
  int *v9; // r10
  unsigned __int8 v10; // r8
  int v11; // r6
  bool v12; // zf
  char *next_free; // [sp+0h] [bp-14h]

  v3 = (struct obstack *)result;
  v5 = *(_DWORD *)(result + 8);
  next_free = *(char **)(result + 12);
  v6 = (unsigned int)&next_free[-v5] >> 3;
  v7 = v6 - 1;
  if ( v6 )
  {
    v8 = *(_DWORD *)(v5 + 8 * v7);
    v9 = (int *)(v5 + 8 * v7);
    if ( a2 != v8 )
    {
      v10 = *(_BYTE *)(a2 + 32);
      v11 = 8 * v6 - 8 * v7 - 16;
      while ( 1 )
      {
        --v7;
        result = a2;
        if ( ((*(_BYTE *)(v8 + 32) ^ v10) & 7) == 0 )
        {
          v12 = !sub_9D588(a2, v8);
          result = v8;
          if ( !v12 )
            return result;
          result = sub_9D588(v8, a2);
          if ( result )
            break;
        }
        v9 = (int *)((char *)v9 + v11);
        if ( v7 == -1 )
          goto LABEL_10;
        v8 = *(_DWORD *)(v5 + 8 * v7);
        if ( v8 == a2 )
          return result;
      }
      *v9 = a2;
      v9[1] = a3;
    }
  }
  else
  {
LABEL_10:
    if ( (unsigned int)(v3->chunk_limit - next_free) <= 7 )
    {
      obstack_newchunk(v3, 8);
      next_free = v3->next_free;
    }
    result = a2;
    *(_DWORD *)next_free = a2;
    *((_DWORD *)next_free + 1) = a3;
    v3->next_free += 8;
  }
  return result;
}
