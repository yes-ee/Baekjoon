select a.item_id, item_name
from item_info a
join item_tree b
on a.item_id = b.item_id
where parent_item_id is null