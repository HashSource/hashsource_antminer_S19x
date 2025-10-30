int *__fastcall sub_5A198(int *result, int a2)
{
  int *v3; // [sp+4h] [bp-10h]
  _DWORD *v4; // [sp+8h] [bp-Ch]
  _DWORD *v5; // [sp+Ch] [bp-8h]

  v3 = result;
  while ( *v3 != a2 && !*(_DWORD *)(a2 + 12) )
  {
    if ( **(_DWORD **)(a2 + 8) == a2 )
    {
      v5 = *(_DWORD **)(*(_DWORD *)(a2 + 8) + 4);
      if ( v5[3] == 1 )
      {
        v5[3] = 0;
        *(_DWORD *)(*(_DWORD *)(a2 + 8) + 12) = 1;
        result = sub_59934(v3, *(_DWORD **)(a2 + 8));
        v5 = *(_DWORD **)(*(_DWORD *)(a2 + 8) + 4);
      }
      if ( *(_DWORD *)(*v5 + 12) || *(_DWORD *)(v5[1] + 12) )
      {
        if ( !*(_DWORD *)(v5[1] + 12) )
        {
          *(_DWORD *)(*v5 + 12) = 0;
          v5[3] = 1;
          sub_59A44(v3, v5);
          v5 = *(_DWORD **)(*(_DWORD *)(a2 + 8) + 4);
        }
        v5[3] = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 12);
        *(_DWORD *)(*(_DWORD *)(a2 + 8) + 12) = 0;
        *(_DWORD *)(v5[1] + 12) = 0;
        result = sub_59934(v3, *(_DWORD **)(a2 + 8));
        a2 = *v3;
      }
      else
      {
        v5[3] = 1;
        a2 = *(_DWORD *)(a2 + 8);
      }
    }
    else
    {
      v4 = **(_DWORD ***)(a2 + 8);
      if ( v4[3] == 1 )
      {
        v4[3] = 0;
        *(_DWORD *)(*(_DWORD *)(a2 + 8) + 12) = 1;
        result = sub_59A44(v3, *(_DWORD **)(a2 + 8));
        v4 = **(_DWORD ***)(a2 + 8);
      }
      if ( *(_DWORD *)(v4[1] + 12) || *(_DWORD *)(*v4 + 12) )
      {
        if ( !*(_DWORD *)(*v4 + 12) )
        {
          *(_DWORD *)(v4[1] + 12) = 0;
          v4[3] = 1;
          sub_59934(v3, v4);
          v4 = **(_DWORD ***)(a2 + 8);
        }
        v4[3] = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 12);
        *(_DWORD *)(*(_DWORD *)(a2 + 8) + 12) = 0;
        *(_DWORD *)(*v4 + 12) = 0;
        result = sub_59A44(v3, *(_DWORD **)(a2 + 8));
        a2 = *v3;
      }
      else
      {
        v4[3] = 1;
        a2 = *(_DWORD *)(a2 + 8);
      }
    }
  }
  *(_DWORD *)(a2 + 12) = 0;
  return result;
}
