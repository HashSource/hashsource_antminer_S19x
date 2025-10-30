void __fastcall sub_680F0(_DWORD *a1)
{
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        sub_65F68(a1);
        break;
      case 1:
        sub_66AB8((int)a1);
        break;
      case 2:
        sub_67A20((void **)a1);
        break;
      case 3:
        sub_67D44(a1);
        break;
      case 4:
        sub_67F50(a1);
        break;
      default:
        return;
    }
  }
}
