document.querySelectorAll('.thumbnail').forEach(item => {
    item.addEventListener('click', event => {
        const lightbox = document.getElementById('lightbox');
        const lightboxImg = document.getElementById('lightbox-img');
        const description = document.getElementById('description');

        lightbox.style.display = 'flex';
        lightboxImg.src = item.src;
        description.textContent = item.dataset.description;
    });
});

document.getElementById('close').addEventListener('click', () => {
    document.getElementById('lightbox').style.display = 'none';
});