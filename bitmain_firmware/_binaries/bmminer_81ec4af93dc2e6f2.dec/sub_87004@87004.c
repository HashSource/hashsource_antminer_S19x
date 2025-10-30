int __fastcall sub_87004(int a1, int a2)
{
  *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4) = **(_DWORD **)(a2 + 12);
  if ( (*(int (__fastcall **)(int, int, _DWORD))(a1 + 9252))(a1, a2, *(_DWORD *)(a2 + 12)) >= 0 )
    return sub_8B700(
             *(_DWORD *)(a2 + 20),
             **(_DWORD **)(a2 + 12),
             *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4) - **(_DWORD **)(a2 + 12),
             *(_DWORD *)(a1 + 9236),
             *(_DWORD *)(a1 + 9240),
             *(_DWORD *)(a1 + 9248),
             *(_DWORD *)(a1 + 9244));
  sub_89984(2, "src/spec.c", 418, "a_spec->gen_buf fail");
  return -1;
}
